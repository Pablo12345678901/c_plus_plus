// UtilisationCDU
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord)  // constructeur 0, 1 ou 2 arg
   {  cout << "++ construction point " << x << " " << y
           << " en " << this << endl ;
   }
   point & operator = (const point & p)  // surdef affectation point -> point
   { x = p.x ; y = p.y ;
     cout << "== affectation point --> point de " << &p << " en " << this ;
     return * this ;
   }
   point & operator = (const int n)      // surdef. affectation int -> point
   { x = n ; y = 0 ;
     cout << "== affectation int   --> point de " << x << " " << y
          << " en " << this << endl ;
     return * this ;
   }
  private :
   int x, y ;
} ;
int main()
{  point a(3,4) ;
   a = 12 ;
}