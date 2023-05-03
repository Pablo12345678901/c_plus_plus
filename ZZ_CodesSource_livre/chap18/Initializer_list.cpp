// Initialize_list
#include <iostream>
using namespace std;
 template <typename T> void f (initializer_list<T> val)
{ cout << val.size() << " Valeurs : " ;
  for (T v : val) cout << v << "  " ;
  cout << endl ;
}
int main()
{ f({1.5, 2.3}) ;
  // f({}) ;    // liste vide : T ne peut être deduit  --> erreur compilation
  // f ({1.25, 5, 9, 3.4, 7 }) ;           // ambiguite
  f<float> ({1.25, 5, 9, 3.4, 7 }) ;    // qu'on peut lever ainsi
}