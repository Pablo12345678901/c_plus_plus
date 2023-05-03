// Permutations2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
void affiche (const vector<int> &) ;
int main()
{ vector<int> v {2, 1, 3} ;
  cout << "vecteur initial : " ; affiche(v) ;
  for (int i=0 ; i<=10 ; i++)
  { random_shuffle (v.begin(), v.end()) ;
    cout << "vecteur hasard  : " ; affiche(v) ;
  }
}
void affiche (const vector<int> & v)    // ********* version C++11 ********
{ for (auto x : v) cout << x << " " ;
  cout << endl ;
}
void affiche (const vector<int> & v)    // ********* version C++98 ********
{ for (unsigned int i=0 ; i<v.size() ; i++) cout << v[i] << " " ;
  cout << endl ;
}