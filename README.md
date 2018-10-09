# Module uce-gitix_sx1261
<img src="/images/image.png" width="100%">

## Functions:
   * Connected to LoRa modules: [GiTiX868](https://github.com/RFThings/module-sx1261) and RFM9x
   * Micro USB Firmware MCU using Arduino IDE with Arduino ProMini 8MHz, 3.3V.
   * Pinout connetor:
      * DHT11: Temp and Humid
      * Infrared Sensor (Digital Signal)
      * Communication: UART, I2C
      * Motion Sensor
      * Smoking Sensor
   * Input 4.2 - 5.5V(Vin)
   * Pinout 3.3V,5V
   * Antenna 868MHz on board
   * Internal:
      * Three LEDs (Red, Blue, Green) control digital signal.
      * A button control signal digital on board
      * A button reset MCU
## Installing
  * To install this library:
    * Dowloading Library uce-gitix_sx1261.zip  and exact it.
      install it using the Arduino Library manager ("Sketch" -> "Include Library" -> "Manage Libraries..."), or
      download a zipfile from github using the "Download ZIP" button and install it using the IDE ("Sketch" -> "Include Library" -> "Add .ZIP Library..."
      clone this git repository into your sketchbook/libraries folder.
    * For more info, see https://www.arduino.cc/en/Guide/Libraries
  * Using tool [Arduino IDE](https://www.arduino.cc/en/Main/Software) open file run example **RFThings** -> **tx_uce** or **rx_uce** `.ino` and firmware for boards.
  * Open serial console with **Bautate** `115200`.
## Configuration
  | Board                                 | Arduino ProMini  |
  |---------------------------------------|------------------|
  | Led (R,G,B)                           |  A0,A1,A2        |
  | Button Interrupt                      |  4               |

  | GiTiX868                              | Arduino ProMini  |
  |---------------------------------------|------------------|
  | DIO1                                  | 2                |
  | DIO2                                  | 5                |
  | DIO3                                  | 6                |
  | BUSY                                  | 8                |
  | RESET                                 | 9                |
  | SPI                                   | SPI ProMini      |
  | NSS                                   | 10               |

## Sensors
  * DHT11
    <img src="/images/DHT11.JPG" width="30%">
  * Motion
    <img src="/images/MOTION.png" width="30%">
  * Infrared
    <img src="/images/INFARED.jpg" width="30%">
  * Smoking
    <img src="/images/MQ2.jpg" width="30%">
## Interface
  * UART

    | Board |Arduino ProMini |
    |-------|-----|
    | 0     | RX  |
    | 1     | TX  |

  * I2C

    | Board | Arduino ProMini |
    |-------|-----|
    | A4    | SDA |
    | A5    | SCL |
## Note
  * **Vin** power supply **minimum +3.7V** - **maximum +5.5V**. **Over +5.5V board not connected with the sensors. It will be reformed with Version 1.2**.

## Feature for Version 1.2 original
  * Change pins +5V supply for sensor to +3.3V
  * Supported LoRaWan
