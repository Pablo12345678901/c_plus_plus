#include <iostream>
using namespace std ;

// besoin de runner avec c++20 (avant ne fonctionne pas)
// il y a un avertissement lors de la compilation mais fonctionne quand même

auto retourne_int(int nb)
{
    auto resultat = nb * 300 ;
    cout << "Le résultat dans fonction : " << nb << "*300 = " << resultat << endl ;
    return resultat ;
}

auto retourne_int(int nb = 0) ;

int main()
{
    int nb_1, nb_2 ;
    const int nb_int = 234 ;
    nb_1 = retourne_int(0) ;
    nb_2 = retourne_int(nb_int) ;
    cout << "Les résultats hors fonction sont : \n" << nb_1 << "\n" << nb_2 << endl ;
}

