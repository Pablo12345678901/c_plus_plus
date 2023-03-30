#include <iostream>
using namespace std ;

int main()
{
    int nb ;
    const int nb_2 = 25 ;
    cout << "Chosissez un nombre : " ;
    cin >> nb ;
    const int carre = nb * nb ;
    cout << "Le carré de : " << nb << " vaut : " << carre << ".\n" ;
}

