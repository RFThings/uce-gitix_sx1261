# Module uce-gitix_sx1261
<img src="/images/image.png" width="100%">

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
  | Board                                 | MCU              |
  |---------------------------------------|------------------|
  | Led (R,G,B)                           |  A0,A1,A2        |

  | GiTiX868                              | MCU              |
  |---------------------------------------|------------------|
  | DIO1                                  | 2                |
  | DIO2                                  | 5                |
  | DIO3                                  | 6                |
  | BUSY                                  | 8                |
  | RESET                                 | 9                |
  | SPI                                   | SPI MCU          |
  | NSS                                   | 10               |

## Sensors
  * DHT11
  <img src="/images/DHT11.JPG" width="50%">
  * Motion
  <img src="/images/MOTION.png" width="50%">
  * Infrared
  <img src="/images/INFARED.jpg" width="50%">
  * Smoking
  <img src="/images/MQ2.jpg" width="50%" display: block;margin-left: auto;margin-right: auto;>
## Interface
  * UART
  | Board | MCU |
  | 0     | RX  |
  | 1     | TX  |
  * I2C
  | Board | MCU |
  | A4    | SDA |
  | A5    | SCL |
## Note
  * Vin power supply minimum +3.7V - maximum +5.5V. Over +5.5V board not connected with the sensors. It will be reformed with Version 1.2.

## Feature for Version 1.2 original
  * Change pins +5V supply for sensor to +3.3V
