#include <iostream>
using namespace std ;

void affiche(const int &nb_1) ; // prototype

int main()
{
    const int nb_1 = 10 ;
    float nb_2 = 2.3 ;
    affiche(nb_1) ;
    affiche(nb_2) ;
    cout << "nb_2*4+1 = " << nb_2*4+1 << endl ;
    affiche(nb_2*4+1) ;
    affiche(3) ;
}

void affiche(const int &nb_1)
{
    cout << "Le nombre est : \n" << nb_1 << endl ;
}