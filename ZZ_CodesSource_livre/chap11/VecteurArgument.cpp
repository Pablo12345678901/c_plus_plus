// vecteurArgument
#include <iostream>
#include <vector>
using namespace std ;
void f (vector<int> v) ;
void f(vector<int> v)
{ cout << "En 1 de f, v = " ;
  for (auto n : v) cout << n << " " ; cout << endl ;    // C++11 (voir § 1.4)
  for (auto & n : v) n++ ;                              // C++11 (voir § 1.4)
  cout << "En 2 de f, v = " ; 
  for (auto n : v) cout << n << " " ; cout << endl ;    // C++11 (voir § 1.4)
}
int main()
{ vector<int> v1 {1, 3, 5 } ;
  cout << "En A,      v = " ;
  for (auto n : v1) cout << n << " " ; cout << endl ;   // C++11 (voir § 1.4)
  f (v1) ;
  cout << "En B,      v = " ;
  for (auto n : v1) cout << n << " " ; cout << endl ;   // C++11 (voir § 1.4)
}