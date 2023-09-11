#ifndef Button_h
#define Button_h

#include <Arduino.h>

class Button
{
protected:
    int btnPin;
    int state;
    int result;
    int isOn=false;
    unsigned long buttonclickedMS;
    unsigned long buttonDownMS;

public:
    Button(int pin);
    void start();
    int checkBTN();
    bool isPressed();
    bool checkIsOn();
    void toggleStatus();
};

#endif