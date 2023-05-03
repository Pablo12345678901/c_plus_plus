// OperatorPlus
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord)   // constructeur 0, 1 ou 2 arg
   { cout << "++ construction point : " << x << " " << y << endl ;
   }
   friend point operator + (point, point) ;      // point + point --> point
   void affiche ()
   { cout << "Coordonnees : " << x << " " << y << endl ;
   }
  private :
   int x, y ;
} ;
point operator+ (point a, point b)
{  point r ;
   r.x = a.x + b.x ; r.y = a.y + b.y ;
   return r ;
}
int main()
{  point a, b(9,4) ;
   a = b + 5 ; a.affiche() ;    // refusee si constructeur declare explicit
   a = 2 + b ; b.affiche() ;    // refusee si constructeur declare explicit
}