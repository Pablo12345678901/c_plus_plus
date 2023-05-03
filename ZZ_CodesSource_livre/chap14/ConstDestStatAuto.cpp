//ConstDestStatAuto
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs, int ord) : x(abs), y(ord)  // constructeur ("inline")
    { cout << "++ Construction d'un point : " << x << " " << y
           << " - adresse " << this << endl ;
    }
   ~point ()       // destructeur ("inline")
    { cout << "-- Destruction du point    : " << x << " " << y
           << " - adresse " << this << endl ;
    }
  private :
   int x, y ;
} ;
point a(1, 1) ;     // un objet statique de classe point  -   Avec C++11, voir §5
int main()
{  cout << "****** Debut main *****\n" ;
   point b(4, 9) ;  // un objet automatique de classe point - Avec C++11, voir §5
   for (int i=1 ; i<=3 ; i++)
   {  cout << "** Boucle tour numero " << i << endl ;
      point c(i,2*i) ;   // objets crees dans un bloc -       Avec C++11, voir §5
   }
   cout << "****** Fin main ******\n" ;
}