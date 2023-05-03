// Rotate
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
void affiche (const vector<int> &) ;
int main()
{ int decal = 3 ;
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8} ;
  cout << "vecteur initial     : " ; affiche(v) ;
  rotate (v.begin(), v.begin()+decal, v.end()) ;
  cout << "vecteur decale de 3 : " ; affiche(v) ;
}
void affiche (const vector<int> & v)    // ********* version C++11 ********
{ for (auto x : v) cout << x << " " ;
  cout << endl ;
}
void affiche (const vector<int> & v)    // ********* version C++98 ********
{ for (unsigned int i=0 ; i<v.size() ; i++) cout << v[i] << " " ;
  cout << endl ;
}