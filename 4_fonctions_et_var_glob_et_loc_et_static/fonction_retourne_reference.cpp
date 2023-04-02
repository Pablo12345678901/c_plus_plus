#include <iostream>
using namespace std ;

int & change_valeur(int & nb_1, int & nb_2) ; // Prototype

int main()
{
    int nb_1 = 1, nb_2 = 2, nb_3 = 3, nb_4 = 4 ;

    cout << "AVANT \nnb_1 : " << nb_1 << "\nnb_2 : "<< nb_2 << endl ;
    change_valeur(nb_1, nb_2) = 1000 ;
    cout << "APRES \nnb_1 : " << nb_1 << "\nnb_2 : "<< nb_2 << endl ;

    cout << "AVANT \nnb_2 : " << nb_2 << "\nnb_3 : "<< nb_3 << endl ;
    change_valeur(nb_2, nb_3) = 2000 ;
    cout << "APRES \nnb_2 : " << nb_2 << "\nnb_3 : "<< nb_3 << endl ;

    cout << "AVANT \nnb_3 : " << nb_3 << "\nnb_4 : "<< nb_4 << endl ;
    change_valeur(nb_3, nb_4) = 3000 ;
    cout << "APRES \nnb_3 : " << nb_3 << "\nnb_4 : "<< nb_4 << endl ;

    cout << "AVANT \nnb_4 : " << nb_4 << "\nnb_1 : "<< nb_1 << endl ;
    change_valeur(nb_4, nb_1) = 4000 ;
    cout << "APRES \nnb_1 : " << nb_4 << "\nnb_1 : "<< nb_1 << endl ;
}

int & change_valeur(int & nb_1, int & nb_2)
{
    static bool choix = true ;
    if (choix) {choix=!choix ; return nb_1 ;}
    else {choix=!choix ; return nb_2 ;}
}