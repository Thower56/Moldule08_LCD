#pragma once
#include <LCD1602Proxy.h>

class LCD1602{
public:
    LCD1602(LCD1602Proxy* p_proxy);
    void definirPositionCurseur(int p_Colonne, int p_Ligne) const ;
    void afficher(const String& p_texte) const;
    void effacer() const;
private:
    LCD1602Proxy* m_proxy;
};