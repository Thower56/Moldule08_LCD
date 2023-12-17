#pragma once
#include <LCD1602.h>

class Program{
public:
    Program();
    void loop();
private:
    LCD1602* m_lcd;
};