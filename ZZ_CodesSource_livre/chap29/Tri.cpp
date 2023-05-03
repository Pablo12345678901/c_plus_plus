// Tri
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
void affiche (const vector<int> &) ;
int main()
{ vector<int> v {2, 1, 3, 9, 2, 7, 5, 8} ;
  vector<int> v_bis=v ;

  cout << "vecteur initial        : " ; affiche(v) ;
  sort (v.begin(), v.end()) ;
  cout << "apres sort             : " ; affiche(v) ;
  v = v_bis ;
  partial_sort (v.begin(), v.begin()+5, v.end()) ;
  cout << "apres partial_sort (5) : " ; affiche(v) ;
  v = v_bis ;
  nth_element (v.begin(), v.begin()+ 5, v.end()) ;
  cout << "apres nth_element 6    : " ; affiche(v) ;
  nth_element (v.begin(), v.begin()+ 2, v.end()) ;
  cout << "apres nth_element 3    : " ; affiche(v) ;
}
void affiche (const vector<int> & v)    // ********* version C++11 ********
{ for (auto x : v) cout << x << " " ;
  cout << endl ;
}
void affiche (const vector<int> & v)    // ********* version C++98 ********
{ for (unsigned int i=0 ; i<v.size() ; i++) cout << v[i] << " " ;
  cout << endl ;
}