/***************************************************
  This is our GFX example for the Adafruit ILI9341 Breakout and Shield
  ----> http://www.adafruit.com/products/1651

  Check out the links above for our tutorials and wiring diagrams
  These displays use SPI to communicate, 4 or 5 pins are required to
  interface (RST is optional)
  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  MIT license, all text above must be included in any redistribution
 ****************************************************/

#include "Afantor.h"

// Use hardware SPI
Afant_ILI9341 tft = Afant_ILI9341(_LCD_CS_PIN, _LCD_DC_PIN, _LCD_RST_PIN);
// If using software SPI change pins as desired
// Afant_ILI9341 tft = Afant_ILI9341(_LCD_CS_PIN, _LCD_DC_PIN, _LCD_MOSI_PIN, _LCD_SCLK_PIN, _LCD_RST_PIN);     

void setup() {
  Serial.begin(115200);
  Serial.println("ILI9341 Test!"); 
 
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK); 
  tft.setTextSize(3);
  tft.println("Starting...");
  delay(1000);
  tft.fillScreen(ILI9341_BLACK);
  // read diagnostics (optional but can help debug problems)
  uint8_t x = tft.readcommand8(ILI9341_RDMODE);
  Serial.print("Display Power Mode: 0x"); Serial.println(x, HEX);
  x = tft.readcommand8(ILI9341_RDMADCTL);
  Serial.print("MADCTL Mode: 0x"); Serial.println(x, HEX);
  x = tft.readcommand8(ILI9341_RDPIXFMT);
  Serial.print("Pixel Format: 0x"); Serial.println(x, HEX);
  x = tft.readcommand8(ILI9341_RDIMGFMT);
  Serial.print("Image Format: 0x"); Serial.println(x, HEX);
  x = tft.readcommand8(ILI9341_RDSELFDIAG);
  Serial.print("Self Diagnostic: 0x"); Serial.println(x, HEX); 

  Serial.println(F("Done!"));

  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK); 
}

void loop(void) 
{
  tft.drawRGBBitmap(0, 0, (uint16_t *)gImage_logoAF, 320, 240);
  delay(10000);
  tft.drawRGBBitmap(0, 0, (uint16_t *)gImage_logoAF1, 320, 240);
  delay(10000);
}

