// AppelCastExpr
#include <iostream>
using namespace std ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord)  // constructeur 0, 1 ou 2 arg
    { cout << "++ construction point : " << x << " " << y << endl ; }
    operator int() const  // conversion point --> int  (C++11 : explicit possible)
    { cout << "== appel int() pour le point " << x << " " << y << endl ;
      return x ;
    }
  private :
    int x, y ;
} ;
int main()  // Avec C++11, affectations refusees si operator int  declare explicit
{  point a(3,4), b(5,7) ;
   int n1, n2 ;    n1 = a + 3 ;    cout << "n1 = " << n1 << endl ;
                   n2 = a + b ;    cout << "n2 = " << n2 << endl ;
   double z1, z2 ; z1 = a + 3 ;    cout << "z1 = " << z1 << "\n" ;
                   z2 = a + b ;    cout << "z2 = " << z2 << "\n" ;
}