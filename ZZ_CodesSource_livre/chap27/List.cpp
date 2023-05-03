// List
#include <iostream>
#include <list>
using namespace std ;
void affiche(const list<char> &) ;
int main()
{ string mot = {"anticonstitutionnellement"} ;
  list<char> lc1 (&mot[0], &mot[mot.length()]) ;
  list<char> lc2 ;
  cout << "lc1 init   : " ; affiche(lc1) ;
  cout << "lc2 init   : " ; affiche(lc2) ;
     // Avant C++11, declarer : list<char>::iterator il1 ;
  for (auto il1=lc1.begin() ; il1!=lc1.end() ; il1++)
  if (*il1!='t') lc2.push_back(*il1) ;   /* equivaut a : lc2=lc1 ; */
                                         /* lc2.remove(’t’);       */
  cout << "lc2 apres  : " ; affiche(lc2) ;
  lc1.remove('t') ;
  cout << "lc1 remove : " ; affiche(lc1) ;
  if (lc1==lc2) cout << "les deux listes sont egales\n" ;
  lc1.sort() ;
  cout << "lc1 sort   : " ; affiche(lc1) ;
  lc1.unique() ;
  cout << "lc1 unique : " ; affiche(lc1) ;
}
void affiche(const list<char> & lc)   // ******** version C++11 **************
{ for (auto e : lc) cout << e << " " ;
  cout << endl ;//
}
void affiche(const list<char> & lc)   // ******** version C++98 **************
{ list<char>::const_iterator il ;
  for (il=lc.begin() ; il!=lc.end() ; il++) cout << (*il) << " " ;
  cout << endl ;
}