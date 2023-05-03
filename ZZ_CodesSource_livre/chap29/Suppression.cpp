// Suppression
#include <iostream>
#include <list>
#include <algorithm>
using namespace std ;
void affiche(const list<int> &) ;
bool valeur_paire (int) ;   
int main()
{ list<int> l { 4, 3, 5, 4, 4, 4, 9, 4, 6, 6, 3, 3, 2 } ;
  list<int> l_bis=l ;
  list<int> l2 ;     /* liste vide */
  cout << "liste initiale                   : " ; affiche(l) ;

  auto il = remove(l.begin(), l.end(), 4) ;  /* different de l.remove(4) */
    // avant C++11, declarer :  list<int>::iterator il ;
  cout << "liste apres remove(4)            : " ; affiche(l) ;
  cout << "element places en fin            : " ;
  for (; il!=l.end() ; il++) cout << *il << " " ; cout << endl ;

  l = l_bis ;
  il = unique (l.begin(), l.end()) ;
  cout << "liste apres unique               : " ; affiche(l) ;
  cout << "elements places en fin           : " ;
  for (; il!=l.end() ; il++) cout << *il << " " ; cout << endl ;

  l = l_bis ;
  il = remove_if(l.begin(), l.end(), valeur_paire) ;
   // ou encore (depuis C++11) avec une expression lambda : 
   //    il = remove_if(l.begin(), l.end(), [] (int n) { return !(n%2) ; } ) ;
  cout << "liste apres remove pairs         : " ; affiche(l) ;
  cout << "elements places en fin           : " ;
  for (; il!=l.end() ; il++) cout << *il << " " ; cout << endl ;

  /* elimination de valeurs par copie avec iterateur d’insertion dans liste vide */
  l = l_bis ;
  remove_copy_if(l.begin(), l.end(), front_inserter(l2), valeur_paire) ;
  cout << "liste avec remove_copy_if paires : " ; affiche(l2) ;
}
bool valeur_paire (int n){ return !(n%2) ; }
void affiche (const list<int> & l)    // ********* version C++11 ********
{ for (auto x : l) cout << x << " " ;
  cout << endl ;
}
void affiche (const list<int> & l)    // ********* version C++98 ********
{ list<int>::const_iterator il ;
  for (il=l.begin() ; il!=l.end() ; il++) cout << (*il) << " " ;
  cout << endl ;
}