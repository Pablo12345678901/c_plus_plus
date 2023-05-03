// SurdefPlusAmie
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   friend point operator+ (point, point) ;
   void affiche () const
   { cout << "coordonnees : " << x << " " << y << "\n" ; }
  private :
   int x, y ;
} ;
point operator + (point a, point b)
{  point p ;
   p.x = a.x + b.x ; p.y = a.y + b.y ;
   return p ;
}
int main()
{  point a(1,2) ; a.affiche() ;
   point b(2,5) ; b.affiche() ;
   point c ;
   c = a+b ;      c.affiche() ;
   c = a+b+c ;    c.affiche() ;
}