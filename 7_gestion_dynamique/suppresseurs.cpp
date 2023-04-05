#include <iostream>
#include <memory>
using namespace std;

void suppression(int * ptr)
{
    //cout << "Le pointeur situé à l'adresse " << ptr << "de valeur " << *ptr << " a été supprimé." << endl ;
    (*ptr)+=90 ;
    cout << "Le pointeur de valeur " << *ptr << " à l'adresse " << ptr << " a été supprimé." << endl ;
    delete ptr ;
}

int main()
{
    {
        unique_ptr<int, decltype(suppression)*> uni_ptr_int_1 (new int (100), suppression) ; // ne fonctionne pas avec "make_unique"
        shared_ptr<int> shared_ptr_int_1 (new int (200), suppression) ; // ne fonctionne pas avec "make_shared"
        shared_ptr<int> shared_ptr_int_2 (new int (333), suppression) ;
    }
    cout << "Suppression de tous les pointeurs..." << endl ;
    cout << "Fin du programme." << endl ;
}
