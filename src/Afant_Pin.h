/**
 * \par Copyright (C), 2016-2018, Afant
 * \brief   Driver for Afantor board configuration.
 * @file    Afant_Pin.h
 * @author  Afantor
 * @version V1.0.0
 * @date    2018/04/17
 * @brief   Driver for Afant board.
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
 * This file is the driver for Afant board by Afant.
 *
 * \par History:
 * <pre>
 * `<Author>`         `<Time>`        `<Version>`        `<Descr>`
 * Blue God         2018/04/17         1.0.0            build the file.
 * </pre>
 */
#ifndef _Afant_Pin_H
#define _Afant_Pin_H

#define _LCD_CS_PIN   2   // goes to TFT CS
#define _LCD_DC_PIN   22  // goes to TFT DC
#define _LCD_MOSI_PIN 23  // goes to TFT MOSI
#define _LCD_SCLK_PIN 18  // goes to TFT SCK/CLK
#define _LCD_RST_PIN  21  // goes to TFT RESET
#define _LCD_MISO_PIN     // Not connected

#define _SD_CS_PIN    5   // goes to TFcard CS
#define _SD_MOSI_PIN  23  // goes to TFcard MOSI
#define _SD_MISO_PIN  19  // goes to TFcard MISO
#define _SD_SCLK_PIN  18  // goes to TFcard SCK/CLK

#endif // _Afant_configuration_H
