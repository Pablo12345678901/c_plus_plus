#include <iostream>
using namespace std ;

void affiche_compteur(void) ; // Prototype

int main()
{
    for (int i = 0 ; i<10 ; i++) affiche_compteur() ;
}

void affiche_compteur(void)
{
    static int nb = 2 ; // l'initialisation n'a lieu qu'une seule fois
    // la valeur de 2 sera utilisée jusqu'à modification, puis la nouvelle valeur (pas 2) à chaque appel de la fonction
    nb++ ;
    cout << "compteur : " << nb << endl ;
}