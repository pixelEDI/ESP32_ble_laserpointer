/*
        _          _ ______ _____ _____
       (_)        | |  ____|  __ \_   _|
  _ __  ___  _____| | |__  | |  | || |
 | '_ \| \ \/ / _ \ |  __| | |  | || |
 | |_) | |>  <  __/ | |____| |__| || |_
 | .__/|_/_/\_\___|_|______|_____/_____|
 | |
 |_|

www.pixeledi.eu | https://linktr.ee/pixeledi
BLE Button | V1.0 | 08.2023

check out this awesome library
https://github.com/T-vK/ESP32-BLE-Keyboard

*/

#include <Arduino.h>
#include <BleKeyboard.h>
#include "button.h"

// BleKeyboard bleKeyboard;
BleKeyboard bleKeyboard("MyLaser", "pixelEDI", 100);

Button enterBTN(D8);
const byte laser(D5);

void sendEnter()
{
  if (bleKeyboard.isConnected())
  {
    bleKeyboard.write(KEY_RETURN);
    delay(300);
  }
}

void setup()
{
  Serial.begin(115200);
  enterBTN.start();
  pinMode(laser, OUTPUT);
  bleKeyboard.begin();
}

void loop()
{

  switch (enterBTN.checkBTN())
  {
  case 1:
    sendEnter();
    break;
  }

  if (enterBTN.isPressed())
  {
    digitalWrite(laser, HIGH);
    Serial.println("pressed");
  }
  else
    digitalWrite(laser, LOW);
}
