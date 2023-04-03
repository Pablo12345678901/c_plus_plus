#include <iostream>
using namespace std ;

void afficher(int nb_1 = 0, int nb_2 = 0) ; // PROTOTYPE
int main()
{   
    int a = 10, b = 20 ;
    afficher(a, b) ;
    afficher(a) ;
    afficher(b) ; 
    afficher(0) ;
    afficher() ;  
}
void afficher(int nb_1, int nb_2)
{
    if (nb_1) cout << "Le nombre 1 vaut " << nb_1 << endl ;
    else cout << "Par défaut, le nombre 1 a été défini à 0." << endl ;
    if (nb_2) cout << "Le nombre 2 vaut " << nb_2 << endl ;
    else cout << "Par défaut, le nombre 2 a été défini à 0." << endl ;
    cout << "Fin de la fonction." << endl ;
}