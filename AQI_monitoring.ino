#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define MQ135_PIN A0

void setup() {
  Serial.begin(9600);

  // OLED initialization
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(WHITE);
}

void loop() {
  int sensorValue = analogRead(MQ135_PIN);
  String airQuality;

  if (sensorValue < 200) {
    airQuality = "GOOD";
  } else if (sensorValue < 400) {
    airQuality = "MODERATE";
  } else {
    airQuality = "POOR";
  }

  display.clearDisplay();

  // ---- Title ----
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Desk AQI Monitor");

  // ---- Big Sensor Value ----
  display.setTextSize(3);              // BIG TEXT
  display.setCursor(0, 15);
  display.println(sensorValue);

  // ---- AQI Status ----
  display.setTextSize(2);
  display.setCursor(0, 45);
  display.println(airQuality);

  display.display();

  Serial.print("MQ135 Value: ");
  Serial.println(sensorValue);

  delay(2000);
}
