/*
  SD card read/write
 
 This example shows how to read and write data to and from an SD card file  
 The circuit:
 * SD card attached to SPI bus as follows:
 ** UNO:  MOSI - pin 11, MISO - pin 12, CLK - pin 13, CS - pin 4 (CS pin can be changed)
  and pin #10 (SS) must be an output
 ** Mega:  MOSI - pin 51, MISO - pin 50, CLK - pin 52, CS - pin 4 (CS pin can be changed)
  and pin #52 (SS) must be an output
 ** Leonardo: Connect to hardware SPI via the ICSP header

 
 created   Nov 2010  by David A. Mellis
 modified 9 Apr 2012  by Tom Igoe
 
 This example code is in the public domain.
     
 */
 
#include "Afant_configuration.h"

File myFile;
// Use hardware SPI (on ESP D4 and D8 as above)
//Afant_ILI9341 tft = Afant_ILI9341(_LCD_CS_PIN, _LCD_DC_PIN);
// If using the breakout, change pins as desired
Afant_ILI9341 tft = Afant_ILI9341(_LCD_CS_PIN, _LCD_DC_PIN, _LCD_MOSI_PIN, _LCD_SCLK_PIN, _LCD_RST_PIN);

char *txt_char;
void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  while (!Serial) 
  {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  Serial.print("Initializing SD card...");

  if (!SD.begin(_SD_CS_PIN, _SD_MOSI_PIN, _SD_MISO_PIN, _SD_SCLK_PIN)) 
  {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
  
  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open("test.txt", FILE_WRITE);
  
  // if the file opened okay, write to it:
  if (myFile) 
  {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
      // close the file:
    myFile.close();
    Serial.println("done.");
  } 
  else 
  {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }

  tft.begin();
  // 
  tft.fillScreen(ILI9341_BLACK);
  tft.setRotation(3);
  tft.setCursor(0, 0);
  tft.setTextColor(ILI9341_WHITE); 
  tft.setTextSize(2);
  tft.println("Start Read SD File...");
  myFile = SD.open("test.txt");
  if (myFile) 
  {
    Serial.println("test.txt:");
    tft.println("SD File:");
    // read from the file until there's nothing else in it:
    while (myFile.available()) 
    { 
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } 
  else 
  {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}

void loop()
{
    // nothing happens after setup
}


