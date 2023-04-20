#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nb ;
    char bon_c, mauvais_c ;
    bool ok = false ;
    do {    cout << "Fournissez un nb et un char : " ;
            if (cin >> nb >> bon_c)
            {   cout << "Merci pour le nb : " << nb << " et le char : " << bon_c << endl ;
                ok = true ;
            }
            else
            {   cin.clear() ; cin >> mauvais_c ;
            }
        } while (!ok) ;
    cout << "Fin du programme..." << endl ;
}