#include <iostream>
using namespace std ;

int main()
{
    int nb ;
    const int nb_2 = 25 ;
    cout << "Chosissez un nombre : " ;
    cin >> nb ;
    auto nb_3 = 25e10 ;
    decltype (nb_3) nb_4 = 1 ;
    const int carre = nb * nb ;
    cout << "Le carré de : " << nb << " vaut : " << carre << ".\n" ;
    cout << "Le nombre " << nb_3 << " et le nombre " << nb_4 << " sont du même type.\n" ;
}

