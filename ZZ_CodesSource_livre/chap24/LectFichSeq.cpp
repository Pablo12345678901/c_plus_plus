// LectureFichSeq
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>     //  pour exit
using namespace std ;
int main()
{  string nomfich ;   // attention, avant C++11 nomfich : chaine de type C
   int n ;
   cout << "nom du fichier a lister : " ;
   cin >> nomfich ;
   ifstream entree (nomfich, ios::in|ios::binary) ;    // ou ios::in
   if (!entree) { cout << "ouverture impossible \n" ;
                  exit (-1) ;
                }
   while ( entree.read ( (char*)&n, sizeof(int) ) )
        cout << n << "\n" ;
   entree.close () ;
}