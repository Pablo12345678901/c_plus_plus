#include <iostream>
#include <memory>
using namespace std;

int main()
{
    {
        unique_ptr<int> uni_ptr_int (new int (100)) ;
        // création d'un pointeur unique de type int et initialisation à 100
        cout << "La valeur du pointeur unique vaut : " << *uni_ptr_int << endl ;
        cout << "Modification de cette valeur..." << endl ;
        (*uni_ptr_int)+=80 ;
        cout << "La valeur modifiée vaut : " << *uni_ptr_int << endl ;
        cout << "Suppression de cette valeur..." << endl ;
    }
    //cout << "La valeur modifiée vaut : " << *uni_ptr_int << endl ;
    cout << "Fin du programme." << endl ;
}