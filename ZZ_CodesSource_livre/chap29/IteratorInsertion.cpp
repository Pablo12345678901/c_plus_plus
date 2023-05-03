// IteratorInsertion
#include <iostream>
#include <list>
#include <algorithm>
using namespace std ;
void affiche (const list<char> &) ;
int main()
{ string t = {"essai insert_iterator"} ;
  list<char> l1(&t[0], &t[t.length()]) ;
  list<char> l2 (4, 'x') ; list<char> l3 ;
  cout << "l1 initiale            : " ; affiche(l1) ;
  cout << "l2 initiale            : " ; affiche(l2) ;
    /* insertion dans liste non vide - on pourrait faire front_inserter(l2) */
  copy (l1.begin(), l1.end(), inserter(l2, l2.begin())) ;
  cout << "l2 apres copie inser   : " ; affiche(l2) ;
   /* insertion dans liste vide - on pourrait faire back_inserter(l3 ) */
  copy (l1.begin(), l1.end(), inserter(l3, l3.begin())) ;
  cout << "l3 apres copie inser   : " ; affiche(l3) ;
}
void affiche (const list<char> & l)    // ********* version C++11 ********
{ for (auto x : l) cout << x << " " ;
  cout << endl ;
}
void affiche (const list<char> & l)    // ********* version C++98 ********
{ list<char>::const_iterator il ;
  for (il=l.begin() ; il!=l.end() ; il++) cout << *il << " " ;
  cout << endl ;
}