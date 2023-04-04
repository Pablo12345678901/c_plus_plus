#include <iostream>
using namespace std ;

void modif_temporaire(string ch) ;
void modif_permanente(string &ch) ;

int main()
{
    string ch = "Chaîne initiale" ;
    cout << "Hors fonction : avant fonction de modif temporaire : " << ch << endl ;
    modif_temporaire(ch) ;
    cout << "Hors fonction : après fonction de modif temporaire : " << ch << endl ;
    cout << "Hors fonction : avant fonction de modif permanente : " << ch << endl ;
    modif_permanente(ch) ;
    cout << "Hors fonction : après fonction de modif permanente : " << ch << endl ;
}

void modif_temporaire(string ch)
{
    cout << "AVANT MODIF TEMPORAIRE : " << ch << endl ;
    ch = "123. Chaîne modifiée temporairement" ;
    cout << "APRES MODIF TEMPORAIRE : " << ch << endl ;
}

void modif_permanente(string &ch)
{
    cout << "AVANT MODIF PERMANENTE : " << ch << endl ;
    ch = "456. Chaîne modifiée de manière permanente" ;
    cout << "APRES MODIF PERMANENTE : " << ch << endl ;
}