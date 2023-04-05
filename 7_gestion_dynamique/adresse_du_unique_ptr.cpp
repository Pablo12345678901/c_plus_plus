#include <iostream>
#include <memory>
using namespace std;

int main()
{
    {
        unique_ptr<int> uni_ptr_int (make_unique<int> (100)) ;
        int * ad_uni_ptr = uni_ptr_int.get() ;
        // création d'un pointeur unique de type int et initialisation à 100
        cout << "La valeur du pointeur unique vaut : " << *uni_ptr_int << endl ;
        cout << "Son adresse est : " << ad_uni_ptr << endl ;
        cout << "Modification de la valeur du pointeur via accès à son adresse : " << endl ;
        *ad_uni_ptr = 1000 ;
        cout << "La valeur modifiée vaut : " << *uni_ptr_int << endl ;
        cout << "Suppression de cette valeur..." << endl ;
    }
    cout << "Fin du programme." << endl ;
}