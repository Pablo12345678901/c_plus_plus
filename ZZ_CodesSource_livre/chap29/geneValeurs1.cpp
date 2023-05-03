// geneValeurs1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int suite() ;
void affiche(const vector<int> &) ;
int main()
{ const int N = 10 ;
  vector<int> v(N, 0) ;  /* vecteur de n elements initialises a 0 */
  int suite() ;          /* fonction utilisee pour la generation d'entiers */
  cout << "vecteur initial : " ; affiche(v) ;
  generate (v.begin(), v.end(), suite) ;
  cout << "vecteur genere  : " ; affiche(v) ;
}
int suite() { static int n = 0 ;
              return n++ ;
            }
void affiche (const vector<int> & v)    // ********* version C++11 ********
{ for (auto x : v) cout << x << " " ;
  cout << endl ;
}
void affiche (const vector<int> &v)     // ********* version C++98 ********
{ for (unsigned int i=0 ; i<v.size() ; i++) cout << v[i] << " " ;
  cout << endl ;
}