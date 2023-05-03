// ObjetsMembres
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) 
   { cout << "Constr. point " << x << " " << y << endl ; 
   }
  private :
   int x, y ;
} ;
class cercle
{ public :
   cercle (int , int , int) ;
  private :
   point centre ; 
   int rayon ;
} ;
cercle::cercle (int abs, int ord, int ray) : centre(abs, ord), rayon(ray)
{ cout << "Constr. cercle " << rayon << endl ;
}
int main()
{  cercle a (1,3,9) ;
}