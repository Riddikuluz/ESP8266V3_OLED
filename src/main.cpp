#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // ancho del OLED
#define SCREEN_HEIGHT 64 // altura del OLED

// Declara el objeto de visualización en el bus I2C con SDA = 12 y SCL = 14
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  Wire.begin(14, 12); // SDA, SCL
  // Inicia la pantalla OLED
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Dirección del dispositivo 0x3C
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void loop() {
  display.clearDisplay();
  display.setCursor(0,10);
  display.println("Hello ideaspark\n");
  display.println("Hello ideaspark\n");
  display.println("Hello ideaspark\n");
  display.display();
  delay(1000);
}
