#include <iostream>
using namespace std ;

auto return_auto_value(auto nb)
{
    auto resultat = nb * nb ;
    cout << "Le résultat dans fonction : " << nb << " * " << nb << " = " << resultat << endl ;
    return resultat ;
}

int main()
{
    int nb_int = 234 ;
    cout << "Le résultats hors fonction de f(" << nb_int << ") : " << return_auto_value(nb_int) << endl ;
    float nb_float = 3.14e8 ;
    cout << "Le résultats hors fonction de f(" << nb_float << ") : " << return_auto_value(nb_float) << endl ;
}



