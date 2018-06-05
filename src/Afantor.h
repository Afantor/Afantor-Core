/**
 * \par Copyright (C), 2016-2018, Afant
 * \brief   Driver for Afant board configuration.
 * @file    Afantor.h
 * @author  Afantor
 * @version V1.0.0
 * @date    2018/04/17
 * @brief   Driver for Afantor-Core board.
 *
 * \par Copyright
 * This software is Copyright (C), 2016-2018, Afant. Use is subject to license \n
 * conditions. The main licensing options available are GPL V2 or Commercial: \n
 *
 * \par Open Source Licensing GPL V2
 * This is the appropriate option if you want to share the source code of your \n
 * application with everyone you distribute it to, and you also want to give them \n
 * the right to share who uses it. If you wish to use this software under Open \n
 * Source Licensing, you must contribute all your source code to the open source \n
 * community in accordance with the GPL Version 2 when your application is \n
 * distributed. See http://www.gnu.org/copyleft/gpl.html
 *
 * \par Description
 * This file is the driver for Afantor-Core board by Afantor.
 *
 * \par History:
 * <pre>
 * `<Author>`         `<Time>`        `<Version>`        `<Descr>`
 * Afantor         2018/04/17         1.0.0            build the file.
 * </pre>
 * \par Method List:
 *    
 *  System:
        Afant.begin();
        Afant.update();

    LCD:
        Afant.LCD.setBrightness(uint8_t brightness);
        Afant.LCD.drawPixel(int16_t x, int16_t y, uint16_t color);
        Afant.LCD.drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
        Afant.LCD.fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
        Afant.LCD.fillScreen(uint16_t color);
        Afant.LCD.drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
        Afant.LCD.drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,uint16_t color);
        Afant.LCD.fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
        Afant.LCD.fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,int16_t delta, uint16_t color);
        Afant.LCD.drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
        Afant.LCD.fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
        Afant.LCD.drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color);
        Afant.LCD.fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color);
        Afant.LCD.drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color);
        Afant.LCD.drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[], int16_t w, int16_t h),
        Afant.LCD.drawChar(uint16_t x, uint16_t y, char c, uint16_t color, uint16_t bg, uint8_t size);
        Afant.LCD.setCursor(uint16_t x0, uint16_t y0);
        Afant.LCD.setTextColor(uint16_t color);
        Afant.LCD.setTextColor(uint16_t color, uint16_t backgroundcolor);
        Afant.LCD.setTextSize(uint8_t size);
        Afant.LCD.setTextWrap(boolean w);
        Afant.LCD.printf();
        Afant.LCD.print();
        Afant.LCD.println();
        Afant.LCD.drawCentreString(const char *string, int dX, int poY, int font);
        Afant.LCD.drawRightString(const char *string, int dX, int poY, int font);
        Afant.LCD.drawJpg(const uint8_t *jpg_data, size_t jpg_len, uint16_t x, uint16_t y);
        Afant.LCD.drawJpgFile(fs::FS &fs, const char *path, uint16_t x, uint16_t y);
        Afant.LCD.drawBmpFile(fs::FS &fs, const char *path, uint16_t x, uint16_t y);


    Button:
        Afant.BtnA/B/C/D.read();
        Afant.BtnA/B/C/D.isPressed();
        Afant.BtnA/B/C/D.isReleased();
        Afant.BtnA/B/C/D.wasPressed();
        Afant.BtnA/B/C/D.wasReleased();
        Afant.BtnA/B/C/D.pressedFor(uint32_t ms);
        Afant.BtnA/B/C/D.releasedFor(uint32_t ms);
        Afant.BtnA/B/C/D.lastChange();

    Speaker:
        Afant.Speaker.tone(uint32_t freq);
        Afant.Speaker.tone(freq, time);
        Afant.Speaker.beep();
        Afant.Speaker.setBeep(uint16_t frequency, uint16_t duration);
        Afant.Speaker.mute();

 * Afant_ILI9341 tft = Afant_ILI9341(_LCD_CS_PIN, _LCD_DC_PIN, _LCD_MOSI_PIN, _LCD_SCLK_PIN, _LCD_RST_PIN);
 * tft.begin();
 * uint8_t x = tft.readcommand8(ILI9341_RDMODE);
 * tft.fillScreen(ILI9341_BLACK);
 * tft.setCursor(0, 0);
 * tft.setTextColor(ILI9341_WHITE);  
 * tft.setTextSize(1);
 * tft.println("Hello World!");
 * tft.println(1234.56);
 * tft.println(0xDEADBEEF, HEX);
 * w = tft.width();
 * h = tft.height();
 * tft.drawLine(x1, y1, x2, y2, color);
 * tft.drawFastHLine(0, y, w, color1);
 * tft.drawFastVLine(x, 0, h, color2);
 * tft.drawRect(cx-i2, cy-i2, i, i, color);
 * tft.fillCircle(x, y, radius, color);
 * tft.drawCircle(x, y, radius, color);
 * tft.color565(i, i, i);
 * tft.drawTriangle(
      cx    , cy - i, // peak
      cx - i, cy + i, // bottom left
      cx + i, cy + i, // bottom right
      tft.color565(i, i, i));
 * tft.fillTriangle(cx, cy - i, cx - i, cy + i, cx + i, cy + i, tft.color565(0, i*10, i*10));
 * tft.drawRoundRect(cx-i2, cy-i2, i, i, i/8, tft.color565(i, 0, 0));
 * tft.fillRoundRect(cx-i2, cy-i2, i, i, i/8, tft.color565(0, i, 0));
 */
#ifndef _Afantor_H
#define _Afantor_H

#include "SPI.h"
#include "utility/bmp_map.h"
#include "Adafruit_GFX.h"
#include "Afant_ILI9341.h"
#include "Afant_SD.h"
#include "Afant_Pin.h"

#endif // _Afantor_H
