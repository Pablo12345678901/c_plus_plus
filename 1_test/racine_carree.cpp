#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int nb, i ;
    const int NBFOIS = 5 ;
    float racine ;
    cout << "Je vais vous calculer " << NBFOIS << " racines.\n" ;
    for (i=0; i<NBFOIS; i++)
    {
        cout << "Donnez un nombre pour calculer sa racine : " ;
        cin >> nb ;
        if (nb < 0) cout << "Le nombre " << nb << " n'a pas de racine.\n" ;
        else if (nb >= 0)
        {
            racine = sqrt(nb) ;
            cout << "La racine du nombre " << nb << " est : "<<racine<<".\n" ;
        }
    }
    cout << "Fin du programme \n" ;
}