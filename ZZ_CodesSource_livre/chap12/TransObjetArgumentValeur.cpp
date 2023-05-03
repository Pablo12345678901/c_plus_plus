// TransObjetArgumentValeur
#include <iostream>
using namespace std ;
class point
{ public :
   point (int, int) ;
   void deplace (int, int) ;
   void affiche () ;
  private :
   int x, y ;
} ;
point::point (int abs, int ord) : x(abs), y(ord) { }
void point::deplace (int dx, int dy)
{ x = x + dx ; y = y + dy ; }
void point::affiche ()
{ cout << "Je suis en " << x << " " << y << endl ; }
void f (point p)
{ p.affiche() ;  p.deplace (1, 4) ; p.affiche() ; }
int main()
{ point a(1, 3);
  f(a) ;  a.affiche() ;    // a non modifie par f
}