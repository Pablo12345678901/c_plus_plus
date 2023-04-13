#include <iostream>
using namespace std ;

// patron de fonction
template <typename T> T minimum (T nb_1, T nb_2)
{   return nb_1 < nb_2 ? nb_1 : nb_2 ;
}
// l'appel de la fonction sera appelé "fonction de patron"

int main()
{
    int nb_1 = 10, nb_2 = 20 ;
    float nb_3 = 1.2422e4, nb_4 = 123231e-2 ;
    cout << "Int : nb_1 = " << nb_1 << ", nb_2 = " << nb_2 << ", min = " << min(nb_1, nb_2) << endl ;
    nb_1 *= nb_1 ;
    cout << "Int : nb_1 = " << nb_1 << ", nb_2 = " << nb_2 << ", min = " << min(nb_1, nb_2) << endl ;
    cout << "Float : nb_3 = " << nb_3 << ", nb_4 = " << nb_4 << ", min = " << min(nb_3, nb_4) << endl ;
    nb_4 *= nb_4 ;
    cout << "Float : nb_3 = " << nb_3 << ", nb_4 = " << nb_4 << ", min = " << min(nb_3, nb_4) << endl ;
}