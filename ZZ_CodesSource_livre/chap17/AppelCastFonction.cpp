// AppelCastFonction
#include <iostream>
using namespace std ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord) // constructeur 0, 1 ou 2 arg
     { cout << "++ construction point : " << x << " " << y << endl ; }
    point (const point & p)                      // constructeur de recopie
     { cout << ":: appel constructeur de recopie \n" ;
       x = p.x ; y = p.y ;
     }
    operator int() const  // conversion point --> int  (C++11 : explicit possible)
     { cout << "== appel int() pour le point " << x << " " << y << endl ;
       return x ;
     }
  private :
    int x, y ;
} ;
void fct (int n)            
{  cout << "** appel fct avec argument : " << n << endl ; }
int main()
{  void fct (int) ; 
   point a(3,4) ;
   fct (6) ;                // appel normal de fct
   fct (a) ;                // appel avec conversion implicite de a en int
                            //    (C++11) : refuse si explicit operator int()
}