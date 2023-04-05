#include <iostream>
#include <memory>
using namespace std;

int main()
{
    {
        // initialisation des uniques ptr
        unique_ptr<int> uni_ptr_int_1 (make_unique<int> (100)) ;
        unique_ptr<int> uni_ptr_int_2 (make_unique<int> (200)) ;
        // récupération de l'adresses des uniques ptr
        int * ad_uni_ptr_1 = uni_ptr_int_1.get() ;
        int * ad_uni_ptr_2 = uni_ptr_int_2.get() ;
        cout << "La valeur du pointeur unique 1 vaut : " << *uni_ptr_int_1 << endl ;
        cout << "Son adresse est : " << ad_uni_ptr_1 << endl ;
        cout << "La valeur du pointeur unique 2 vaut : " << *uni_ptr_int_2 << endl ;
        cout << "Son adresse est : " << ad_uni_ptr_2 << endl ;
        cout << "Move du pointeur 2 sur le pointeur 1 (donc suppression du 2)." << endl ;
        uni_ptr_int_1 = move(uni_ptr_int_2) ;
        cout << "La valeur du pointeur unique 1 vaut maintenant : " << *uni_ptr_int_1 << endl ;
        ad_uni_ptr_1 = uni_ptr_int_1.get() ;
        cout << "Et son adresse est devenue : " << ad_uni_ptr_1 << endl ;
        //BUG car n'existe plus cout << "La valeur du pointeur unique 2 vaut : " << *uni_ptr_int_2 << endl ;
        ad_uni_ptr_2 = uni_ptr_int_2.get() ;
        cout << "L'adresse du pointeur 2 est mise au pointeur nul est vaut : " << ad_uni_ptr_2 << endl ;
    }
    cout << "Fin du programme." << endl ;
}