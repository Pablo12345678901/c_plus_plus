// set_new_handler
#include <cstdlib>    // pour exit
#include <new>        // pour set_new_handler
#include <iostream>
using namespace std ; 
void deborde () ;   // proto fonction appelee en cas de manque de memoire
int main()
{ set_new_handler (deborde) ;
  int * adr =  nullptr ;   // 0 avant C++11 
  int nbloc = 0 ;
  unsigned long taille ; cout << "Taille souhaitee ? " ; cin >> taille ;
  for (nbloc=1 ; ; nbloc++)
     { adr = new int [taille] ;
       cout << "Allocation bloc numero : " << nbloc << endl ;
     }
}
void deborde ()       // fonction appelee en cas de manque de memoire
{  cout << "Memoire insuffisante\n" ; cout << "Abandon de l’execution\n" ;
   exit (-1) ;     // sans cette instruction, on boucle sur l’appel de deborde
}