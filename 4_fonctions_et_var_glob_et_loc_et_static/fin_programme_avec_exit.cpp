#include <iostream>
using namespace std ;

void affiche(int nb) ; // Protoype C++

int main()
{
    int nb = 15 ;
    for (int i = nb ; ; nb--) affiche(nb) ;
    cout << "Fin du programme" << endl ;
}

void affiche(int nb) // fonction
{
    cout << "C++ : Le nombre vaut " << nb << endl ;
    if (!nb)
    {
        cout << "Fin du programme prématurée" << endl ;
        exit(1) ;
    }
    else if (nb==2)
    {
        cout << "Fin brutale avec abort" << endl ;
        abort() ;
    }
}