// Insertions
#include <iostream>
#include <string>
#include <list>
using namespace std ;
int main()
{ string ch ("0123456") ;
  string voy ("aeiou") ;
  char t[] = {"778899"} ;
          /* insere le caractere a en ch.begin()+1 */
  ch.insert (ch.begin()+1, 'a') ;    cout << ch << "\n" ;
          /* insere le caractere b en position d’indice 4   */
  ch.insert (4, 1, 'b') ;            cout << ch << "\n" ;
          /* insere 3 fois le caractere x en fin de ch  */
  ch.insert (ch.end(), 3, 'x') ;     cout << ch << "\n" ;
          /* insere 3 fois le caractere x en position d’indice 6 */
  ch.insert (6, 3, 'x') ;            cout << ch << "\n" ;
          /* insere la chaine voy en position 0 */
  ch.insert (0, voy) ;               cout << ch << "\n" ;
    /* insere en debut, la chaine voy, a partir de position 1, longueur 3 */
  ch.insert (0, voy, 1, 3) ;         cout << ch << "\n" ;
          /* insertion d’une sequence */
  ch.insert (ch.begin()+2, t, t+6) ; cout << ch << "\n" ;
}