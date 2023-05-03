// AccesCaracChaine1
#include <iostream>
using namespace std;
int main()
{ string ch = "bonjour" ;
  cout << "-- Caractere de rang 0 = " << ch[0] << endl ;
  cout << "-- Liste de tous les caracteres de ch :" << endl ;
  for (unsigned int i=0 ; i<ch.size() ; i++) cout << ch[i] << " " ;
  cout << endl ;
  cout << "-- Liste des caracteres de rang pair de ch :" << endl ;
  for (unsigned int i=0 ; i<ch.size() ; i+=2) cout << ch[i] << " " ;
  cout << endl ;
  ch[1] = 'a' ;
  cout << "-- En A - ch contient maintenant : " << ch << endl ;
  ch[3]+= 2 ;   // remplace j par m
  cout << "-- En B - ch contient maintenant : " << ch << endl ;
  ch[25] = 'x' ;                                     // A EVITER
  cout << "-- En C - ch[25] = " << ch[25] << endl ;  // malgre les apparences
  cout << "-- En D - ch contient maintenant : " << ch << endl ;
  cout << "-- En E - ch[-8] = " << ch[-3] << endl ;
  auto ch1 = "bonjour" ;     // ---- ATTENTION ----
  cout << "-- En F - ch1[3] = " << ch1[3] << endl ;   // semble OK mais...
  // ch1[3] = ' ' ;  rejeté car ch1 de type const char *  
}