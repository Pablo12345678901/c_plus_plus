#include <iostream>
#include <memory>
using namespace std;

auto creation()
{
    static int nb = 100 ;
    unique_ptr<int> uni_ptr (make_unique<int> (nb)) ;
    cout << "Le Ptr à l'adresse : " << uni_ptr.get() << ", vaut : " << *uni_ptr << endl ;
    nb+=20 ;
    return uni_ptr ;
}

int main()
{
    {
        cout << "\n" ;
        unique_ptr<int> uni_ptr_int_1 (make_unique<int> (100)) ;
        //shared_ptr<int> shared_ptr_int_1 (make_shared <int> (100)) ;
        cout << "Up1 vers l'adresse : " << uni_ptr_int_1.get() << " et valant : " << *uni_ptr_int_1 << endl ;
        cout << "Transformation du unique en shared..." << endl ;
        shared_ptr<int> shared_ptr_int_1 (move(uni_ptr_int_1)) ;
        cout << "Sh1 vers l'adresse : " << shared_ptr_int_1.get() << " et valant : " << *shared_ptr_int_1 << endl ;
        cout << "Compteur des pointeurs vers l'adresse : " << shared_ptr_int_1.get() << " : " << shared_ptr_int_1.use_count() << endl ;
        cout << "Création d'un autre shared pointant sur le même emplacement..." << endl ;
        shared_ptr<int> shared_ptr_int_2 (shared_ptr_int_1) ;
        cout << "Compteur des pointeurs vers l'adresse : " << shared_ptr_int_1.get() << " : " << shared_ptr_int_1.use_count() << endl ;
        cout << "\n" ;
        unique_ptr<int> up_int (creation()) ;
        cout << "Nouveau up vers l'adresse : " << up_int.get() << " et valant : " << *up_int << endl ;
        shared_ptr<int> sp_int (creation()) ;
        cout << "Nouveau sp vers l'adresse : " << sp_int.get() << " et valant : " << *sp_int << endl ;
        cout << "Nouveau sp vers la même adresse..." << endl ;
        shared_ptr<int> sp_int_2 (sp_int) ;
        cout << "Compteur des pointeurs vers l'adresse : " << sp_int.get() << " : " << sp_int.use_count() << endl ;
    }
    cout << "Suppression de tous les pointeurs..." << endl ;
    cout << "Fin du programme." << endl ;
}

