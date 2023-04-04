#include <iostream>
using namespace std ;

int main()
{
     // tester l'initialisation d'un code avec pointeur nul ou non
    //int *ad = nullptr ;
    int *ad ;
    int nb = 20 ;
    if (!ad)
    {
        cout << "Le pointeur est nul." << endl ;
        ad = &nb ;
        *ad = 1111 ;
    }
    cout << "Le pointeur est " << ad << "." << endl ;
    cout << "Et sa valeur vaut : " << *ad << endl ;
}