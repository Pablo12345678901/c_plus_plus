#include <iostream>
using namespace std ;

int main()
{
    int n ;
    do {
            cout << "Saisissez un nombre : " << endl ;
            cin >> n ;
            cout << "Voici son carré : " << n*n << endl ;
        } while (n!=-1) ;
    cout << "Fin du programme" << endl ;
}