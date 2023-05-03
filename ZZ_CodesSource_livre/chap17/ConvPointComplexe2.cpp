// ConvPointComplexe2
#include <iostream>
using namespace std ;
class point ;
class complexe
{  public :
    complexe (double r=0, double i=0) : reel(r), imag(i) { }
    complexe (point) ;
    void affiche () { cout << reel << " + " << imag << "i\n" ; }
  private : 
    double reel, imag ;
} ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord) { }
    friend complexe::complexe (point) ;
  private :
    int x, y ;
} ;
complexe::complexe (point p) : reel(p.x), imag(p.y) { }
int main()
{  point a(3,5) ;
   complexe c (a) ; c.affiche () ;
}