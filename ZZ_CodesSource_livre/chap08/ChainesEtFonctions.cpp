//ChainesEtFonctions
#include <iostream>
using namespace std;
void f1 (string ch)
{ cout << "-- Entree dans f1,  ch = " << ch << endl ;
  ch = "bonsoir" ;
  cout << "-- Sortie de f1,    ch = " << ch << endl ;
 }
void f2 (string & ch)
{ cout << "-- Entree dans f1,  ch = " << ch << endl ;
  ch = "au revoir" ;
  cout << "-- Sortie de f1,    ch = " << ch << endl ;
 }
int main()
{ string ch1 = "bonjour" ; cout << "-- avant appel f1, ch1 = " << ch1 << endl ;
  f1(ch1) ;                cout << "-- apres appel f1, ch1 = " << ch1 << endl ;
  f2(ch1) ;                cout << "-- apres appel f2, ch1 = " << ch1 << endl ;
}