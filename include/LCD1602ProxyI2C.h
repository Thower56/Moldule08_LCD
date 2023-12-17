#pragma once;
#include <LiquidCrystal_I2C.h>
#include <LCD1602Proxy.h>

class LCD1602ProxyI2C : public LCD1602Proxy{
public:
    LCD1602ProxyI2C();
    void definirPositionCurseur(int p_Colonne, int p_Ligne) const ;
    void afficher(const String& p_texte) const;
    void effacer() const;
private:
    LiquidCrystal_I2C* m_Lcd;
};