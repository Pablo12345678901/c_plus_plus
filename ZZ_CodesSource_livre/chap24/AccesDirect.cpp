// AccesDirect
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>     //  pour exit
using namespace std ;
int main()
{ string nomfich ;   // attention, avant C++11 nomfich : chaine de type C
  int n, num ;
  cout << "nom du fichier a consulter : " ;
  cin >> nomfich ;
  ifstream entree (nomfich, ios::in|ios::binary) ;   // ou ios::in
  if (!entree) { cout << "Ouverture impossible\n" ;
                 exit (-1) ;
               }
  do { cout << "Numero de l'entier recherche : " ;
       cin >> num ;
       if (num)
          { entree.seekg (sizeof(int) * (num-1) , ios::beg ) ;
            entree.read ( (char *) &n, sizeof(int) ) ;
            if (entree) cout << "-- Valeur : " << n << endl ;
              else {  cout << "-- Erreur\n" ;
                      entree.clear () ;
                   }
          }
     }
  while (num) ;
  entree.close () ;
}