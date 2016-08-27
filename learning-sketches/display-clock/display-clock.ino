#include <Wire.h>
#include "DS3231.h"
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"

DS3231 clock;
RTCDateTime dt;

Adafruit_7segment led_display = Adafruit_7segment();
boolean drawDots = false;

void setup()
{
  led_display.begin(0x70);
  clock.begin();
}

void writeTimeToDisplay()
{
  dt = clock.getDateTime();
  led_display.writeDigitNum(0, dt.hour / 10, drawDots);
  led_display.writeDigitNum(1, dt.hour % 10, drawDots);
  led_display.drawColon(drawDots);
  led_display.writeDigitNum(3, dt.minute / 10, drawDots);
  led_display.writeDigitNum(4, dt.minute % 10, drawDots);
  drawDots = !drawDots;
  led_display.writeDisplay();
}

void loop()
{
  delay(1000);
  writeTimeToDisplay();
}
