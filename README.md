# Module uce-gitix_sx1261
![Board](https://github.com/RFThings/uce-gitix_sx61/blob/master/images/image1.png)

## Functions:
   * Connected to LoRa modules: GiTiX868 and RFM9x
   * Micro USB Firmware MCU using Arduino IDE Bootloader Arduino ProMini
   * Pinout connetor:
      * DHT11: Temp and Humid
      * Infrared Sensor (Digital Signal)
      * Communication: UART, I2C
      * Motion Sensor
      * Smoking Sensor
   * Input 4.2 - 5V(Vin)
   * Pinout 3.3V,5V
   * Antenna 868MHz Internal
   * Internal:
      * Three LED (Red, Blue, Green) Control digital signal.
      * A button control signal digital in board
      * A button reset MCU

## Quick Start
    * Dowloading Library uce-lora-sx1261.zip  and exact it.
    * Using tool [Arduino IDE](https://www.arduino.cc/en/Main/Software) open file run example tx or rx `.ino` and Firmware for board.
## Connection
    | Board| MCU|
    | Led (R,G,B)|  A0,A1,A2|
    | GiTiX868| MCU|
    | DIO0,DIO1,DIO2,BUSY,RESET,SPI,SPI-NSS| 2,6,7,8,9,SPI,10|
## Note
    * Vin power supply minimum +3.7V - maximum +5.5V. Over +5.5V board not connected with the sensors. It will be reformed with Version 1.2.

## Feature for Version 1.2 original
    * Change pins +5V supply for sensor to +3.3V
