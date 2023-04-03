
#include <iostream>
using namespace std ;

void sosie(int nb_1 = 0) ; // prototype
void sosie(float nb_1 = 1.1) ;

int main()
{
    int nb_int = 10 ;
    float nb_float = 12.34e5 ;
    sosie(nb_int) ;
    //sosie() ; // BUG : car en l'absence d'argument ET si arguments par défaut défini pour toutes les fonctions du même nom
    // surcharge impossible
    sosie(nb_float) ;
}

void sosie(int nb_1)
{
    cout << "Le nombre 1 de type int vaut " << nb_1 << endl ;
}

void sosie(float nb_1)
{
    cout << "Le nombre 1 de type float vaut " << nb_1 << endl ;
}