// AlgosCopie
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std ;
void affiche(const list<int> &) ;
int main()
{ vector<int> v = { 1, 2, 3, 4, 5 } ;
  list<int> l(8, 0) ;        /* liste de 8 elements egaux a 0*/
  list<int> l2(3, 0) ;       /* liste de 3 elements egaux a 0 */
  cout << "liste initiale      : " ; affiche(l) ;
  copy (v.begin(), v.end(), l.begin()) ;
  cout << "liste apres copie 1 : " ; affiche(l) ;
  l = l2 ;         /* l contient maintenant 3 elements egaux à 0 */
  l.erase(l.begin(), l.end()) ;         /* l est maintenant vide */
                                    /* on y insere les elem de v */
  copy (v.begin(), v.end(), inserter(l, l.begin())) ;
  cout << "liste apres copie 2 : " ; affiche(l) ;
}
void affiche (const list<int> & l)    // ********* version C++11 ********
{ for (auto x : l) cout << x << " " ;
  cout << endl ;
}
void affiche (const list<int> & l)    // ********* version C++98 ********
{ list<int>::const_iterator il ;
  for (il=l.begin() ; il!=l.end() ; il++) cout << (*il) << " " ;
  cout << endl ;
}