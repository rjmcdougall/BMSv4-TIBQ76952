/*
THIS IS THE HARDWARE ABSTRACT LAYER 
FOR DIYBMS ESP32 CONTROLLER PCB - THIS IS THE LARGER
PCB WITH RS485/CANBUS/TFT DISPLAY
*/
#if defined(ESP32)

#include <Arduino.h>
#include <Wire.h>

#ifndef HAL_ESP32_H_
#define HAL_ESP32_H_

// Derived classes
class HAL_ESP32
{
public:
    void ConfigureI2C(void (*ExternalInputInterrupt)(void));
    void SetOutputState(uint8_t outputId, RelayState state);
    uint8_t ReadInputRegisters();
    bool OutputsEnabled = false;
    bool InputsEnabled = false;

private:
    //Private constructor (static class)
};

#endif
#endif