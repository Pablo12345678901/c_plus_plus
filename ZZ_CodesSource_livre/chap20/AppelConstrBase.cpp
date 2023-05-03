// AppelConstrBase
#include <iostream>
using namespace std ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord)   // constructeur usuel
    { cout << "++ point    " << x << " " << y << endl ; }
    point (const point & p) : x(p.x), y(p.y)       // constructeur de recopie
    { cout << "CR point    " << x << " " << y << endl ; }
  private :
    int x, y ;
} ;
class pointcol : public point 
{  public :
    pointcol (int abs=0, int ord=0, int cl=1) : point (abs, ord) // constr usuel
    { coul = cl ; 
      cout << "++ pointcol " << int(coul) << endl ;
    }
    pointcol (const pointcol & p) : point (p), coul(p.coul) // constr de recopie
              // il y aura conversion implicite de p dans le type point
    { cout << "CR pointcol " << int(coul) << endl ;
    }
  private :
    char coul ;
} ;
void fct (pointcol pc)
{  cout << "*** entree dans fct ***\n" ;
}
int main()
{  void fct (pointcol) ;
   pointcol a (2,3,4) ;
   fct (a) ;                // appel de fct, à qui on transmet a par valeur
}