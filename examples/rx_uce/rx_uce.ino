
#include "board.h"
#include "radio.h"
#include "sx126x-board.h"
#include "sx126x.h"
#include <SPI.h>


#define USE_MODEM_LORA

#define RF_FREQUENCY                                868500000 // Hz

#define LORA_BANDWIDTH                              2         // [0: 125 kHz,
                                                              //  1: 250 kHz,
                                                              //  2: 500 kHz,
                                                              //  3: Reserved]
#define LORA_SPREADING_FACTOR                       12        // [SF7..SF12]
#define LORA_CODINGRATE                             1         // [1: 4/5,
                                                              //  2: 4/6,
                                                              //  3: 4/7,
                                                              //  4: 4/8]
#define LORA_SYMBOL_TIMEOUT                         5         // Symbols
#define LORA_PREAMBLE_LENGTH                        8         // Same for Tx and Rx
#define LORA_FIX_LENGTH_PAYLOAD_ON                  false
#define LORA_IQ_INVERSION_ON                        false

#define TX_OUTPUT_POWER                             15
static RadioEvents_t RadioEvents;
void OnRxDone( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr );
void OnTxDone(void);
void OnTxTimeout(void);
void OnRxTimeout(void);

  RadioStatus_t status;
  uint16_t Interrupt;
  RadioError_t error;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  SPI.begin();
  SX126xIoInit();
  Serial.begin(115200);
  Serial.println("Begin");

  RadioEvents.RxDone = OnRxDone;
  RadioEvents.TxDone = OnTxDone;
  RadioEvents.TxTimeout = OnTxTimeout;
  RadioEvents.RxTimeout = OnRxTimeout;

  Radio.Init( &RadioEvents );
  Serial.println("Init events");

  Radio.SetChannel( RF_FREQUENCY );
  Serial.println("Set rf frequency");

  Radio.SetPublicNetwork(true);
  Radio.SetRxConfig( MODEM_LORA, LORA_BANDWIDTH, LORA_SPREADING_FACTOR,
                     LORA_CODINGRATE, 0, LORA_PREAMBLE_LENGTH,
                     LORA_SYMBOL_TIMEOUT, LORA_FIX_LENGTH_PAYLOAD_ON,
                     0, true, 0, 0, LORA_IQ_INVERSION_ON, true );
  Serial.println("Set Rx config");

  Radio.Rx( 0 ); // Continuous Rx
  Serial.println("RX");
}

void loop() {

}

void OnRxDone( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr )
{
  digitalWrite(LED,HIGH);
  Serial.println("rx finish");

  Serial.print("packet byte : ");
  for (int i = 0; i < size; ++i)
    Serial.print(payload[i]);
  Serial.println();
  Serial.print("packet string : ");
  Serial.println((char*)payload);
  Serial.print("RSSI : ");
  Serial.println(rssi);

  Serial.print("SNR : ");
  Serial.println(snr);

  digitalWrite(LED,LOW);
}

void OnTxDone(void)
{
}

void OnTxTimeout()
{
  Serial.println("tx timeout");
}

void OnRxTimeout()
{
  Radio.Rx( 0 );
}
