#include <LCD1602ProxyI2C.h>

LCD1602ProxyI2C::LCD1602ProxyI2C(){
    m_Lcd = new LiquidCrystal_I2C(0x27, 16,2);
    m_Lcd->init();
    m_Lcd->backlight();
};
void LCD1602ProxyI2C::definirPositionCurseur(int p_Colonne, int p_Ligne) const {
    m_Lcd->setCursor(p_Colonne, p_Ligne);
};
void LCD1602ProxyI2C::afficher(const String& p_texte) const{
    m_Lcd->clear();
    if(p_texte.length() > 16){
        for (size_t i = 0; i < p_texte.length(); i++)
        {
            if(i <16){
                m_Lcd->setCursor(i, 0);
                m_Lcd->write(p_texte[i]);
            }
            if(i > 16){
                m_Lcd->setCursor(i - 16, 1);
                m_Lcd->write(p_texte[i]);
            }
        }
        
    }
    else 
    m_Lcd->print(p_texte);
};
void LCD1602ProxyI2C::effacer() const{
    m_Lcd->clear();
};