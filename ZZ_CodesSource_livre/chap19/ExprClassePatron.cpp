// ExprClassePatron
#include <iostream>
using namespace std ;
template <typename T, int n> class tableau
{ public :
   tableau () { cout << "construction tableau \n" ; }
   T & operator [] (int i)  { return tab[i] ; }
  private :
   T tab [n] ;
} ;
class point
{ public :
   point (int abs=1, int ord=1 ) : x(abs), y(ord)   // ici init par defaut à 1
     { cout << "constr point " << x << " " << y << endl ; }
   void affiche () const { cout << "Coordonnees : " << x << " " << y << endl ; }
  private :
   int x, y ;
} ;
int main()
{  tableau <int,4> ti ;
   for (int i=0 ; i<4 ; i++) ti[i] = i ; cout << "ti : " ;
   for (int i=0 ; i<4 ; i++) cout << ti[i] << " " ; cout << endl ;
   tableau <point, 3> tp ;
   for (int i=0 ; i<3 ; i++) tp[i].affiche() ;
}  