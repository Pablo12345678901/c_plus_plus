#include <iostream>
using namespace std;

int main()
{
    int *ad_int = new int (20) ;
    cout << "La valeur initiale vaut : " << *ad_int << endl ;
    cout << "Modification de cette valeur..." << endl ;
    (*ad_int)+=80 ;
    cout << "La valeur modifiée vaut : " << *ad_int << endl ;
    cout << "Suppression de cette valeur..." << endl ;
    delete ad_int ;
    cout << "Mise à 0 du pointeur..." << endl ;
    ad_int = nullptr ;
    //cout << "La valeur modifiée vaut : " << *ad_int << endl ; // BUG car pas de valeur
    if (ad_int) cout << "Le pointeur vaut : " << ad_int << endl ;
    else cout << "Le pointeur est nul." << endl ;
    cout << "Fin du programme" ;
    return EXIT_SUCCESS ;
}