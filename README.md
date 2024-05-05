# ESP8266V3 OLED

This project demonstrates how to use a 0.96-inch OLED display with an ESP8266 module. The code displays the message "Hello ideaspark" on the OLED display.

## Components

- ESP8266 (configured as ESP-12E in PlatformIO)
- 0.96-inch OLED display (SSD1306)

## Connections

The connections between the ESP8266 and the OLED display are as follows:

| ESP8266 | OLED |
|---------|------|
| VCC (3.3V) | VCC |
| GND | GND |
| D6 (GPIO12) | SDA |
| D5 (GPIO14) | SCL |

## Code

The code for this project is located in the `src/main.cpp` file. It uses the `Adafruit_SSD1306` library to control the OLED display.

## Setup

To compile and upload the code to your ESP8266, you will need PlatformIO in Visual Studio Code. Make sure to configure your environment according to your ESP8266 module. In this case, the ESP-12E module is used.

## Known Issues

If the display does not turn on, make sure the connections are correct and that you are using the correct pins for SDA and SCL in the `Wire.begin()` function. In this project, SDA is connected to D6 (GPIO12) and SCL to D5 (GPIO14), so the function is called as `Wire.begin(14, 12);`.

## License

This project is under the MIT license. See the `LICENSE` file for more details.
