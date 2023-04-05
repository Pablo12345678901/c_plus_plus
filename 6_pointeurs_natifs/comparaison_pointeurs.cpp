#include <iostream>
using namespace std ;

void comparaison_pointeur(int *ad_1, int *ad_2) ;

int main()
{
    int *ad_1, *ad_2, *ad_3 ;
    int nb_1 = 20, nb_2 = 30 ;
    ad_1 = ad_2 = &nb_1 ;
    ad_3 = &nb_2 ;
    comparaison_pointeur(ad_1, ad_2) ;
    comparaison_pointeur(ad_2, ad_3) ;
}

void comparaison_pointeur(int *ad_1, int *ad_2)
{
    if (ad_1 == ad_2) cout << "Les pointeurs sont identiques et ils valent " << *ad_1 << "." << endl ;
    else
    {
        cout << "Les pointeurs sont distincts." << endl ;
        cout << "Le pointeur 1 vaut : " << *ad_1 << " tandis que le pointeur 2 vaut : " << *ad_2 << "." << endl ;
    }
}