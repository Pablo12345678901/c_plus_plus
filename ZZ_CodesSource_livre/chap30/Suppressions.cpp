// Suppressions
#include <iostream>
#include <string>
#include <list>
using namespace std ;
int main()
{ string ch ("0123456789"), ch_bis=ch ;
        /* supprime, a partir de position d’indice 3, pour une longueur de 2 */
  ch.erase (3, 2) ;                        cout << "A : " << ch << "\n" ;
  ch = ch_bis ;
       /* supprime, de begin()+3 à begin()+6 */
  ch.erase (ch.begin()+3, ch.begin()+6) ;  cout << "B : " << ch << "\n" ;
       /* supprime, a partir de position d’indice 3   */
  ch.erase (3) ;                           cout << "C : " << ch << "\n" ;
  ch = ch_bis ;
       /* supprime le caractere de position begin()+4 */
  ch.erase (ch.begin()+4) ;                cout << "D : "<< ch << "\n" ;
}