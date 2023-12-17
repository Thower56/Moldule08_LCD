#pragma once
#include <Arduino.h>
#include <EEPROM.h>

template <typename Data>
class MemoryManagement{
public:
    MemoryManagement(){}
    void writeData(int p_location, const Data &p_data){
        m_data = p_data;
        EEPROM.put(p_location, p_data);
    }
    void readData(int p_location, const Data &p_data){
        m_data = p_data;
        EEPROM.get(p_location, p_data);
    }
    void memoryCheck(){
        for (size_t i = 0; i < 1024; i++)
        {
            EEPROM.get((i,HEX), m_data);
            if(m_data != 0){
                Serial.print(i, HEX);
                Serial.println(" : " + m_data);
            }
        }
    }
    Data getLastDataCheck(){
        return m_data;
    }
private:
    Data m_data;
};