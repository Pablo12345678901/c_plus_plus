// Multimap
#include <iostream>
#include <map>
using namespace std ;
void affiche (const multimap<char, int> &) ;
int main()
{ multimap<char, int> m, m_bis ;
  m.insert(make_pair('c', 10)) ;  m.insert(make_pair('f', 20)) ;
  m.insert(make_pair('x', 30)) ;  m.insert(make_pair('p', 40)) ;
  m.insert(make_pair('y', 40)) ;  m.insert(make_pair('p', 35)) ;
  cout << "map initial :\n          " ; affiche(m) ;
  m.insert(make_pair('f', 25)) ;  m.insert(make_pair('f', 20)) ;
  m.insert(make_pair('x', 2)) ;
  cout << "map avec fff et xx :\n          " ; affiche(m) ;
  auto im=m.find('x') ; /* on ne verifie pas que im != m.end() */
   // avant C++11, declarer : multimap<char, int>::iterator im ;    
  m_bis = m ;      /* on fait une copie de m dans m_bis   */
  m.erase(im) ;
  cout << "map apres erase(find('x')) :\n          " ; affiche(m) ;
  m.erase('f') ;
  cout << "map apres erase('f') :\n          " ; affiche(m) ;
  m.swap(m_bis) ;
  cout << "map apres swap :\n          " ; affiche(m) ;
  cout << "il y a " << m.count('f') << " fois la cle 'f'\n" ;
  m.erase(m.upper_bound('f')) ;  /* supprime derniere cle 'f' - ici pas de test*/
  cout << "map apres erase (u_b('f')) :\n          " ; affiche(m) ;
  m.erase(m.lower_bound('f')) ;
  cout << "map apres erase (l_b('f')) :\n          " ; affiche(m) ;
  m.erase(m.upper_bound('g')) ;
  cout << "map apres erase (u_b('g')) :\n          " ; affiche(m) ;
  m.erase(m.lower_bound('g')) ;
  cout << "map apres erase (l_b('g')) :\n          " ; affiche(m) ;
  m.erase(m.lower_bound('d'), m.upper_bound('x')) ;
  cout << "map apres erase (l_b('d'), u_b('x')) :\n          " ; affiche(m) ;
}
void affiche(const multimap<char, int> & m)  // ********* version C++11 **********
{ for (auto el : m)
  { cout << "(" << el.first << "," << el.second << ") " ;}
  cout << endl ;
}
void affiche(const multimap<char, int> & m)   // ******** version C++98 **********
{ multimap<char, int>::const_iterator im ; 
  for (im=m.begin() ; im!=m.end() ; im++)
    cout << "(" << (*im).first << "," << (*im).second << ")" ;
  cout << endl ;
}