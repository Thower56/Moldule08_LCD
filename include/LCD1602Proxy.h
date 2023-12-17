#pragma once
#include <Arduino.h>

class LCD1602Proxy{
public:
    virtual void definirPositionCurseur(int p_Colonne, int p_Ligne) const = 0;
    virtual void afficher(const String& p_texte) const = 0;
    virtual void effacer() const = 0;
};