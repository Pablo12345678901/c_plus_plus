#include <iostream>
using namespace std ;

int main()
{
    int nb_int = 10 ;
    initializer_list<int> list_int = {1, 2, 3, 'Z', 3*nb_int} ;
    float nb_float  = 3.14e8 ;
    initializer_list<float> list_float = {nb_float, 2*nb_float, 3*nb_float, 'Z'*nb_float, 3*nb_int*nb_float} ;
    for (int i : list_int) cout << i << " " ;
    cout << endl ;
    for (float fl : list_float) cout << fl << " " ;
    cout << endl ;
}