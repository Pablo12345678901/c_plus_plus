// ConvPointComplexe1
#include <iostream>
using namespace std ;
class complexe ;  
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord) { }
    operator complexe () ;       // conversion point --> complexe
  private :
    int x, y ;
} ;
class complexe
{ public :
    complexe (double r=0, double i=0)  : reel(r), imag(i) { }
    friend point::operator complexe () ;
    void affiche () const 
    { cout << reel << " + " << imag <<"i\n" ; }
  private :
    double reel, imag ;
} ;
point::operator complexe ()
{ complexe r ; r.reel=x ; r.imag=y ;
  cout << "cast "<<x<<" "<<y<<" en "<<r.reel<<" + "<<r.imag<<"i\n" ;
  return r ;
}

int main()
{ point a(2,5) ; complexe c ;
  c = (complexe) a ; c.affiche () ;      // conversion explicite
  point b (9,12) ;
  c =  b ;           c.affiche () ;      // conversion implicite
}