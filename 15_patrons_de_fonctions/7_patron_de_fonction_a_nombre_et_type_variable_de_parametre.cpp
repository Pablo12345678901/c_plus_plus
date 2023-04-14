#include <iostream>
using namespace std ;

void affiche() {} ; // prototype à définir vide avant patron
template <typename T, typename... Typeparametres> // typename... signifie que nb de type variables autres param (0, 1, 2, ... n) paramètres(s) supplémentaires
void affiche(T val, Typeparametres... autresValeurs) // définition fonction avec usage du patron // autresValeurs = la liste des (0, 1, 2, ... n) valeurs associés aux types
{ cout << val << endl ; // affiche la valeur
affiche(autresValeurs...) ; // appel récursif de la fonction pour les valeurs suivantes
} // la fonction se stoppe lors qu'on l'appelle avec une liste vide

int main()
{
    string ch{"bonjour"} ;
    char carac ('z') ;
    char * adr = &carac ;
    affiche(5, 6.4, ch, 'w', *adr) ;
}