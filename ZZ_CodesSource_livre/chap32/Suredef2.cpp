// Surdef2
#include <iostream>
namespace A
{ void f(char c)  { std::cout << "A::f(char)\n" ; }
  void f(float x) { std::cout << "A::f(float)\n" ; }
} 
namespace B
{ void f(int n) { std::cout << "B::f(int)\n" ; }
}
void f(double y)  { std::cout << "::f(double)\n" ; }
using A::f ;   // idem avec using namespace A 
using B::f ;   // idem avec using namespace B
int main()
{ int n=10 ;
  char c='a' ;
  float x=2.5 ;
  double y=1.3 ;
  f(n) ; f(c) ;
  f(x) ; f(y) ;
}