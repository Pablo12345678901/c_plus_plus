#include <iostream>
using namespace std ;

int main()
{
    int nb_1 = 20, nb_2 = 30 ;
    int *ad_1 = &nb_1 ;
    const int *ad_2 = ad_1 ;
    int *ad_3 = const_cast<int *>(ad_2) ;
    cout << "AVANT Valeur dans pointeur ad_1 : " << *ad_1 << endl ;
    (*ad_1)++ ;
    cout << "APRES Valeur dans pointeur ad_1 : " << *ad_1 << endl ;
    cout << "AVANT Valeur dans pointeur ad_2 : " << *ad_2 << endl ;
    //(*ad_2)++ ; // Impossible de modifier car const
    cout << "APRES Valeur dans pointeur ad_2 : " << *ad_2 << endl ;
    cout << "AVANT Valeur dans pointeur ad_3 : " << *ad_3 << endl ;
    (*ad_3)++;
    cout << "APRES Valeur dans pointeur ad_3 : " << *ad_3 << endl ;
}
