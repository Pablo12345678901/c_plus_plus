// FontionAmie1
#include <iostream>
using namespace std ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord) { } // constructeur ("inline")
       // declaration fonction amie (independante) nommee coincide
    friend bool coincide (const point &, const point &) ;
  private :
    int x, y ;
} ;
bool coincide (const point &p, const point &q)  // definition de coincide
{ return ((p.x == q.x) && (p.y == q.y)) ;
}
int main()                                      // programme d’essai
{  point a(1,0), b(1), c ; 
   if (coincide (a,b)) cout << "a coincide avec b \n" ;
                  else cout << "a et b sont differents \n" ;
   if (coincide (a,c)) cout << "a coincide avec c \n" ;
                  else cout << "a et c sont differents \n" ; 
}