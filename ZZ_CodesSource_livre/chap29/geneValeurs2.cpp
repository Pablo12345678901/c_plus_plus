// GeneValeurs2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
void affiche(const vector<int> &) ;
class sequence   /* classe fonction utilisee pour la generation d’entiers */
{ public :
   sequence (int i) : n(i) { }            /* constructeur      */
   int operator() () { return n++ ; }     /* ne pas oublier () */
  private :
   int n ;                          /* valeur courante generee */
} ;
int main()
{ int n = 10 ;
  vector<int> v(n, 0) ;  /* vecteur de n elements initialises a 0 */
  cout << "vecteur initial  : " ; affiche(v) ;
  generate (v.begin(), v.end(), sequence(0)) ;
  cout << "vecteur genere 1 : " ; affiche(v) ;
  generate (v.begin(), v.end(), sequence(4)) ;
  cout << "vecteur genere 2 : " ; affiche(v) ;
}
void affiche (const vector<int> & v)    // ********* version C++11 ********
{ for (auto x : v) cout << x << " " ;
  cout << endl ;
}
void affiche (const vector<int> & v)    // ********* version C++98 ********
{ vector<int>::const_iterator il ;
  for (unsigned i=0 ; i<v.size() ; i++) cout << v[i] << " " ;
  cout << endl ;
}