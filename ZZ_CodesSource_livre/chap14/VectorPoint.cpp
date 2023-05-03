// VectorPoint
#include <iostream>
#include <vector>
using namespace std ;
class point
{ public :
   point (int abs, int ord=0) : x(abs), y(ord)
     { cout << "++ Appel Constructeur " << x << " " << y << endl ; }
   point ( const point & p) : x(p.x), y(p.y)
     { cout << "++ Appel Const copie  " << x << " " << y << endl ;  }
   private :
    int x, y ;
} ;
int main()
{  point courbe1[3]  { {1, 1} , 2, {3, 3} } ;
   point p1(1, 2) ;
   point courb2[2] {p1, {5, 5} } ;
   vector<point> courbe3 {p1, {2, 2}, 3} ;   // pas de dimension ici
}