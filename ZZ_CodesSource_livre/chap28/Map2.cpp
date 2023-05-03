// Map2
#include <iostream>
#include <map>
using namespace std ;
void affiche(const map<char, int> &) ;
int main()
{ map<char, int> m = { {'c', 10}, {'f', 20}, {'x', 30}, {'p', 40} } ;  
  m['c'] = 10 ; m['f'] = 20 ; m['x'] = 30 ; m['p'] = 40 ;
  cout << "map initial          : " ; affiche(m) ;
  auto im = m.find ('f') ;    /* ici, on ne verifie pas que im est != m.end() */
   // avant C++11, declarer :  map<char, int>::iterator im ; 
  cout << "cle 'f' avant insert : " << (*im).first << "\n" ;
  m.insert (make_pair('a', 5)) ;       /* on insere un element avant 'f' */
  m.insert (make_pair('t', 7)) ;       /* et un element apres 'f'        */
  cout << "map apres insert     : " ; affiche(m) ;
  cout << "cle 'f' apres insert : " << (*im).first << "\n" ;/* im -> 'f' */
  m.erase('c') ;
  cout << "map apres erase 'c'  : " ; affiche(m) ;
  im = m.find('p') ; if (im != m.end()) m.erase(im, m.end()) ;
  cout << "map apres erase int  : " ; affiche(m) ;
}
void affiche (const map<char, int> &m)   // ********** version C++11 **********
{ for (auto el : m)  cout << "(" << el.first << "," << el.second << ") " ;
  cout << endl ;
}
void affiche(const map<char, int> & m)   // ********** version C++98 **********
{ map<char, int>::const_iterator im ;
  for (im=m.begin() ; im!=m.end() ; im++)
    cout << "(" << (*im).first << "," << (*im).second << ") " ;
  cout << endl ;
}