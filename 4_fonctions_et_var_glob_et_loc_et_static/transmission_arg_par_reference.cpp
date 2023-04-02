#include <iostream>
using namespace std ;

void modif_valeur(int &nb_1, int &nb_2) ; // prototype

int main()
{
    int nb_1 = 10, nb_2 = nb_1 + 12 ;
    cout << "AVANT FONCTION : \nnb_1 : " << nb_1 << "\nnb_2 : " << nb_2 << endl ;
    modif_valeur(nb_1, nb_2) ;
    cout << "APRES FONCTION : \nnb_1 : " << nb_1 << "\nnb_2 : " << nb_2 << endl ;
}

void modif_valeur(int &nb_1, int &nb_2)
{
    int nb_inter ;
    cout << "AVANT MODIF : \nnb_1 : " << nb_1 << "\nnb_2 : " << nb_2 << endl ;
    nb_inter = nb_1 ;
    nb_1 = nb_2 ;
    nb_2 = nb_inter ;
    cout << "APRES MODIF : \nnb_1 : " << nb_1 << "\nnb_2 : " << nb_2 << endl ;
}