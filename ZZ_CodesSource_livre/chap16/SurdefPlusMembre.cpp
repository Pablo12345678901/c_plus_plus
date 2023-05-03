// SurdefPlusMembre
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   point operator + (point) const ;
   void affiche () const
   { cout << "coordonnees : " << x << " " << y << "\n" ; }
  private :
   int x, y ;
} ;
point point::operator + (point a) const
{  point p ;
   p.x = x + a.x ; p.y = y + a.y ;
   return p ;
}
int main()
{  point a(1,2) ; a.affiche() ;
   point b(2,5) ; b.affiche() ;
   point c ;
   c = a+b ;      c.affiche() ;
   c = a+b+c ;    c.affiche() ;
}