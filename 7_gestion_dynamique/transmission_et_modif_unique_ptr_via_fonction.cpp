#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int> transfert_propriete(unique_ptr<int> uni_ptr) ;

int main()
{
    {
        // initialisation des uniques ptr
        unique_ptr<int> uni_ptr_int_1 (make_unique<int> (100)) ;
        cout << "Le ptr1 à l'adresse : " << uni_ptr_int_1.get() << ", vaut : " << *uni_ptr_int_1 << endl ;
        auto uni_ptr_int_2 = transfert_propriete(move(uni_ptr_int_1)) ;
        cout << "Le ptr2 à l'ancienne adresse du ptr1 : " << uni_ptr_int_2.get() << ", vaut : " << *uni_ptr_int_2 << endl ;
        uni_ptr_int_1 = unique_ptr<int> (new int (300)) ;
        cout << "Le ptr1 à la nouvelle adresse : " << uni_ptr_int_1.get() << ", vaut désormais : " << *uni_ptr_int_1 << endl ;
        uni_ptr_int_1 = make_unique<int> (500) ;
        cout << "Le ptr1 à la nouvelle adresse : " << uni_ptr_int_1.get() << ", vaut désormais : " << *uni_ptr_int_1 << endl ;
    }
    cout << "Suppression de tous les pointeurs..." << endl ;
    cout << "Fin du programme." << endl ;
}

unique_ptr<int> transfert_propriete(unique_ptr<int> uni_ptr)
{
    (*uni_ptr) += 20 ;
    cout << "Le ptrX à l'adresse : " << uni_ptr.get() << ", vaut : " << *uni_ptr << endl ;
    return uni_ptr ;
}

