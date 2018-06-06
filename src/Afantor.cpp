// Copyright (c) Afantor. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "Afantor.h"

void Afantor::begin(bool LCDEnable, bool SDEnable) {
    
    // UART 
    Serial.begin(115200);
    Serial.flush();
    Serial.print("Afantor initializing...");

    // // TONE
    // Speaker.begin();

    // // Setup the button with an internal pull-up
    // pinMode(BUTTON_A_PIN, INPUT_PULLUP);


    // // Afant LCD INIT
    // if (LCDEnable) 
    //     Lcd.begin();

    // // TF Card
    // if (SDEnable) 
    //     SD.begin(TFCARD_CS_PIN, SPI, 40000000);
    
    // // Set wakeup button
    // setWakeupButton(BUTTON_A_PIN);

    Serial.println("OK");
}

void Afantor::update() {

    //Button update
    // BtnA.read();

    //Speaker update
    // Speaker.update();
}

void Afantor::setWakeupButton(uint8_t button) {
    _wakeupPin = button;
}

void Afantor::powerOFF() 
{
    
    // // power off the Lcd
    // Lcd.setBrightness(0);
    // Lcd.sleep();

    // // ESP32 into deep sleep
    // USE_SERIAL.printf("Enabling EXT0 wakeup on pins GPIO%d\n", _wakeupPin);
    // esp_sleep_enable_ext0_wakeup((gpio_num_t)_wakeupPin , LOW);
    
    // while(digitalRead(_wakeupPin) == LOW) {
    //     delay(10);
    // }
    // USE_SERIAL.println("On deep sleep mode.");
    // esp_deep_sleep_start();
    // USE_SERIAL.println("On power OFF fail!");
}

Afantor Afant;
