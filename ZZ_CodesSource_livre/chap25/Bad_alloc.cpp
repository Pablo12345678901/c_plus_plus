// Bad_alloc
#include <iostream>
using namespace std ;
int main()
{  int * adr = nullptr ;   // 0, avant C++11
   int nbloc = 0 ;         // initialisation de precaution
   unsigned long taille ; cout << "Taille souhaitee ? " ; 
   cin >> taille ;
   try { for (nbloc=1 ; ; nbloc++)
         { adr = new int [taille] ;
           cout << "Allocation bloc numero : " << nbloc << endl ;
         }
       }
   catch (bad_alloc b) { cout << "" ; }
   cout << "Nous avons pu allouer " << nbloc-1 << " blocs de "
        << taille << "octets " << endl ;
}