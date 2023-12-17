#include <LCD1602.h>

LCD1602::LCD1602(LCD1602Proxy* p_proxy){
    m_proxy = p_proxy;
};
void LCD1602::definirPositionCurseur(int p_Colonne, int p_Ligne) const {
    m_proxy->definirPositionCurseur(p_Colonne, p_Ligne);
};
void LCD1602::afficher(const String& p_texte) const {
    m_proxy->afficher(p_texte);
};
void LCD1602::effacer() const {
    m_proxy->effacer();
};