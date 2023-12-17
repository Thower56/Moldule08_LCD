#include <Program.h>
#include <Arduino.h>
#include <LCD1602.h>
#include <LCD1602ProxyI2C.h>
#include <MemoryManagement.h>

bool refresh;
MemoryManagement<int>* memory;
Program::Program(){
    Serial.begin(9600);
    m_lcd = new LCD1602(new LCD1602ProxyI2C());
    refresh = true;
    memory = new MemoryManagement<int>();
    
};
void Program::loop(){
    String test = "Hello World this is a test !";
    if(refresh){
        refresh = false;
        m_lcd->afficher(test);
        //memory->memoryCheck();
    }
};