# Proyecto OLED con ESP8266V3

Este proyecto muestra cómo utilizar una pantalla OLED de 0.96 pulgadas con un módulo ESP8266. El código muestra un mensaje "Hello ideaspark" en la pantalla OLED.

## Componentes

- ESP8266 (configurado como ESP-12E en PlatformIO)
- Pantalla OLED de 0.96 pulgadas (SSD1306)

## Conexiones

Las conexiones entre el ESP8266 y la pantalla OLED son las siguientes:

| ESP8266 | OLED |
|---------|------|
| VCC (3.3V) | VCC |
| GND | GND |
| D6 (GPIO12) | SDA |
| D5 (GPIO14) | SCL |

## Código

El código para este proyecto se encuentra en el archivo `src/main.cpp`. Utiliza la biblioteca `Adafruit_SSD1306` para controlar la pantalla OLED.

## Configuración

Para compilar y subir el código a tu ESP8266, necesitarás PlatformIO en Visual Studio Code. Asegúrate de configurar tu entorno de acuerdo con tu módulo ESP8266. En este caso, se utiliza el módulo ESP-12E.

## Problemas conocidos

Si la pantalla no se enciende, asegúrate de que las conexiones estén correctas y que estés utilizando los pines correctos para SDA y SCL en la función `Wire.begin()`. En este proyecto, SDA está conectado a D6 (GPIO12) y SCL a D5 (GPIO14), por lo que la función se llama como `Wire.begin(14, 12);`.

## Licencia

Este proyecto está bajo la licencia MIT. Consulta el archivo `LICENSE` para más detalles.
