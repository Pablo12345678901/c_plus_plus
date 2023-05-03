// New-nothrow
#include <iostream>
using namespace std ;
int main()
{  int * adr = nullptr ;     // 0 avant C++11
   int nbloc = 0 ;           // initialisation de precaution
   unsigned long taille ; cout << "Taille souhaitee ? " ; cin >> taille ;
   for (nbloc=1 ; ; nbloc++)
   { adr = new (nothrow) int [taille] ;
     if (!adr) { cout << "**** manque de memoire ****\n" ;
                 break ;
               }
     cout << "Allocation bloc numero : " << nbloc << endl ;
   }
   cout << "Nous avons pu allouer " << nbloc-1 << " blocs de " 
        << taille << "octets " << endl ;
}