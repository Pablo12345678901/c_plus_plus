// TransRefObjet
#include <iostream>
using namespace std ;
class point                     // Une classe point contenant seulement :
{ public :                             // un constructeur ("en ligne")
   point (int abs=0, int ord=0) : x(abs), y(ord) { }   
   bool coincide (point &) ;           // et une fonction membre : coincide
  private :
   int x, y ;
 } ;
bool point::coincide (point & pt)
{  return ( (pt.x == x) && (pt.y == y) ) ; }

int main()                              // Un petit programme d’essai
{  point a, b(1), c(1,0) ;
   cout << "a et b : " << a.coincide(b) << " ou " << b.coincide(a) << endl ;
   cout << "b et c : " << b.coincide(c) << " ou " << c.coincide(b) << endl ;
}