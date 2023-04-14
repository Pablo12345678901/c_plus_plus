#include <iostream>
#include <initializer_list>
using namespace std ;

// patron de fonction
template <typename T> T minimum (initializer_list<T> list)
{   T var = *list.begin() ;
    for (T t : list) if (var > t) var = t ;
    return var ;
}
// l'appel de la fonction sera appelé "fonction de patron"

int main()
{
    //int nb_1 = 10, nb_2 = 20, nb_3 = 30, min ;
    //min = minimum({nb_1, nb_2, nb_3, 0}) ; // test avec int
    float nb_1 = 10.1, nb_2 = -1.2e4, nb_3 = -1000, min ;
    min = minimum({nb_1, nb_2, nb_3}) ; // test avec float
    //min = minimum<int>({}) ; // bug car le code ne peut pas accéder au 1er élément de la liste (elle est vide)
    cout << "Le minimum est : " << min << endl ;
}