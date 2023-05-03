// EcritureFichSeq
#include <cstdlib>                    // pour exit
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
int main()
{  string nomfich ; int n ;  // attention, avant C++11 nomfich : chaine de type C
   cout << "nom du fichier a creer : " ;
   cin >> nomfich ;
   ofstream sortie (nomfich, ios::out|ios::binary) ;    // ou ios::out
   if (!sortie) { cout << "creation impossible \n" ; exit (1) ;
                }
   do { cout << "donnez un entier : " ;
        cin >> n ;
        if (n) sortie.write ((char *)&n, sizeof(int) ) ;
      }
   while (n && (sortie)) ;
   sortie.close () ;
}