// ConvParConstr
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord)  // constructeur 0, 1 ou 2 arg
   { cout << "++ construction point " << x << " " << y
          << " en " << this << endl ;
   }
   point (const point & p)                       // constructeur de recopie
   { x = p.x ; y = p.y ;
     cout << ":: constr. recopie de " << &p << " en " << this << endl ;
   }
  private :
   int x, y ;
} ;
void fct (point p)                              // fonction simple
{  cout << "** appel fct " << endl ; }
int main()
{  void fct (point) ;
   point a(3,4) ;
   a = point (12) ;  // appel explicite constructeur
   a = 12 ;          // appel implicite constructeur 
                     //   refuse avec explicit
   fct(4) ;          // appel implicite constructeur recopie 
                     //   refuse avec explicit
}