// ConstDestObjets
#include <iostream>
using namespace std ;
  // ----- declaration classe test ------------------
class test
{ public :
  int num ;
  test (int) ;    // constructeur
  ~test () ;      // destructeur
} ;
  // ----- definition classe test ------------------
test::test (int n) : num(n)
{ cout << "++ Appel constructeur - num = " << num << endl ; }
test::~test ()
{ cout << "-- Appel destructeur  - num = " << num << endl ; }
void fct (int) ;
int main()
{ test a(1) ;
  for (int i=2 ; i<=4 ; i++) fct(i) ;
}
void fct (int p)
{ test x(2*p) ; }