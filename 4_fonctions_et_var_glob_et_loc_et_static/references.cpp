#include <iostream>
using namespace std ;

int main()
{
    int nb_1 = 10 ;
    int & ref_nb_1 = nb_1 ;
    ref_nb_1++ ;
    cout << "nb_1 = " << nb_1 << "\nref_nb_1 = " << ref_nb_1 << endl ;
    cout << "& ref_nb_1 : " << &ref_nb_1 << endl ;
}