// AffectationVector
#include <iostream>
#include <vector>
using namespace std;
int main()
{ vector<int> v1 { 1, 3, 5 } ;
  vector<int> v2 { 2, 4, 6, 8 } ;
  cout << "En A, les " << v1.size() << " valeurs de v1 sont : " ;
  for (auto v : v1) cout << v << " " ; cout << endl ;    // C++11 (voir § 1.4)
  cout << "En A, les " << v2.size() << " valeurs de v2 sont : " ;
  for (auto v : v2) cout << v << " " ; cout << endl ;    // C++11 (voir §1.4)
  v1 = v2 ;
  cout << "En B, les " << v1.size() << " valeurs de v1 sont : " ;
  for (auto v : v1) cout << v << " " ; cout << endl ;    // C++11 (voir § 1.4)
  cout << "En B, les " << v2.size() << " valeurs de v2 sont : " ;
  for (auto v : v2) cout << v << " " ; cout << endl ;    // C++11 (voir § 1.4)
}