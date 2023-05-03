// GestDynTableauxNatifs
#include <iostream>
#include <memory>   // pour unique_ptr
using namespace std ;
int main()
{ cout << "Combien de valeurs : " ;
  int nb ; cin >> nb ;
  //----------- allocation C++03 d'un emplacement pour nb entiers ------------
  //           dans lequel on place les carrres des nombres 1 à nb
  int * adi = new int [nb] ;
  cout << "Allocation de " << nb << " int en      : " << adi << endl ;
  for (int i=0 ; i<nb ; i++) adi[i]=(i+1)*(i+1) ; // ou *(adi+i) au lieu de adi[i]
  cout << "Voici les carres des nombres de 1 a " << nb << " : \n" ;
  for (int i=0 ; i<nb ; i++) cout << adi[i] << " " ;
    // ou : for (int *adibis=adi ; adibis<adi+nb ; adibis++) cout << *adibis << " " ;
  cout << endl ;
  delete [] adi ;   // liberation des nb entiers
  cout << "Liberation des " << nb << " entiers" << endl ;
    //----------------- Le même tableau en C++11 ------------------------------
  unique_ptr<int[]> upi (new int [nb]) ;
    // auto upi = make_unique<int[]>(nb) ;    C++14 uniquement
  cout << "Allocation de nb entiers en : " << upi.get() << "\n" ;
  for (int i = 0 ; i<nb ; i++) upi[i] = (i+1)*(i+1) ;
    // *(upi+i) = (i+1) * (i+1)         ne fonctionnerait pas ici
    // *(upi.get()+i) = (i+1) * (i+1)   fonctionnerait - mais deconseille
  cout << "Voici les carres des nombres de 1 a " << nb << " : \n" ;
  for (int i=0 ; i<nb ; i++) cout << adi[i] << " " ;
    // le tableau sera libere lorsque upi sera detruit, ici en fin de main
}