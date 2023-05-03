// ReferenceRvalue
#include <iostream>
using namespace std;
void f (int & p)        { cout << "f(int &) \n" ; }
void f (const int & p)  { cout << "f(const int &) \n" ; }
void f (int && p)       { cout << "f(int &&) \n" ; }
int g (int p)  { return 2*p ; }
int main()
{ int n = 3 ;
  const int q = 3 ;
  f(n) ;        // n est une lvalue (modifiable)
  f(q) ;        // p est une lvalue non modifiable
  f(g(n)) ;     // g(n) est une valeur temporaire --> rvalue
  f(4) ;        // 4 est recopiée dans un emplacement temporaire (rvalue)
}