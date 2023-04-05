#include <iostream>
#include <memory>
using namespace std;

int main()
{
    {
        shared_ptr<int> shared_ptr_int_1 (make_shared <int> (100)) ;
        cout << "Pour le moment : " << shared_ptr_int_1.use_count() << " pointeurs sur l'emplacement : " << shared_ptr_int_1.get() << endl ;
        {
            shared_ptr<int> shared_ptr_int_2 (shared_ptr_int_1) ;
            cout << "Pour le moment : " << shared_ptr_int_1.use_count() << " pointeurs sur l'emplacement : " << shared_ptr_int_1 << endl ;
        }
        cout << "Suppression du ptr2." << endl ;
        cout << "Pour le moment : " << shared_ptr_int_1.use_count() << " pointeurs sur l'emplacement : " << shared_ptr_int_1 << endl ;
    }
    cout << "Suppression de tous les pointeurs..." << endl ;
    cout << "Fin du programme." << endl ;
}

