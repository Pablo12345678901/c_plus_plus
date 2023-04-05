
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nb = 20 ;
    auto carre = [nb] () {cout << "Le carré de " << nb << " = " << nb*nb << endl ;} ;
    auto racine = [&nb] () {cout << "La racine de " << nb << " = " << sqrt(nb) << endl ;} ;
    cout << "La 1ère fonction est avec la valeur initiale tandis que la 2ème est avec la valeur de l'adresse (donc modifiable)." << endl ;
    cout << "Appel avant modification de la valeur de nb : " << nb << endl ;
    carre() ;
    racine() ;
    nb+= 80 ;
    cout << "Modification de la valeur de nb à : " << nb << endl ;
    carre() ;
    racine() ;
}