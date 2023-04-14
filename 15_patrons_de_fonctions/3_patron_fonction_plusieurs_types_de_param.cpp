#include <iostream>
using namespace std ;

// patron de fonction
template <typename T, typename U> T fonction_bidon (T nb_1, U nb_2, T nb_3)
{   return nb_1 + nb_2 + nb_3 ; // sera converti en type T
}

int main()
{
    int nb_int_1 = 1, nb_int_2 = 2, nb_int_3 = 3 ;
    float nb_float_1 = 1.111, nb_float_2 = 2.222 , nb_float_3 = 3.333 ;
    cout << "fct(nb_int_1, nb_float_1, nb_int_2) : " << fonction_bidon(nb_int_1, nb_float_1, nb_int_2) << "\nT : int / U : float / Résultat : int" << endl ;
    cout << "fct(nb_float_1, nb_int_2, nb_float_3) : " << fonction_bidon(nb_float_1, nb_int_2, nb_float_3) << "\nT : float / U : int / Résultat : float" << endl ;
    cout << "fct(nb_float_1, nb_float_2, nb_float_3) : " << fonction_bidon(nb_float_1, nb_float_2, nb_float_3) << "\nT : float / U : float / Résultat : float" << endl ;
    cout << "fct<int>(nb_float_1, nb_float_2, nb_float_3) : " << fonction_bidon<int>(nb_float_1, nb_float_2, nb_float_3) << "\nT : float converti en int / U : float (déduis selon paramètre) / Résultat : int (conversion forcée)" << endl ;
    cout << "fct<float, int>(nb_int_1, nb_float_2, nb_float_3) : " << fonction_bidon<float, int>(nb_int_1, nb_float_2, nb_float_3) << "\nT : int converti en float / U : float converti en int / Résultat : float (conversion forcée)" << endl ;
}
