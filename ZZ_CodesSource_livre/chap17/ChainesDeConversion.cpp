// ChainesDeConversions
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord)  // constructeur 0, 1 ou 2 arg
   { cout << "++ construction point : " << x << " " << y << endl ;  }
   operator int() const   // conversion point --> int   (C++11 : explicit possible)
   { cout << "== appel int() pour le point " << x << " " << y << endl ;
     return x ;
   }
  private :
   int x, y ;
} ;
void fct (double v) 
{  cout << "** appel fct avec argument : " << v << endl ; }
int main() // C++11 : avec explicit operator int(), les affectations sont rejetees
{  point a(3,4) ;
   int n1 ;   double z1, z2 ;
   n1 = a + 3.85 ; cout << "n1 = " << n1 << endl ;   
   z1 = a + 3.85 ; cout << "z1 = " << z1 << endl ;
   z2 = a        ; cout << "z2 = " << z2 << endl ; 
   fct (a) ;   
}