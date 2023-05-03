// Derivation3
#include <iostream>
using namespace std ;
template <typename T> class point
{ public :
    point (T abs=0, T ord=0) : x(abs), y(ord)  { }
    void affiche () const 
    { cout << "Coordonnees : " << x << " " << y << endl ; }
  private :
    T x ; T y ;
} ;
template <typename T, typename U> class pointcol : public point <T>
{  U coul ;
  public :
   pointcol (T abs=0, T ord=0, U cl=1) : point <T> (abs, ord), coul(cl) { }
   void affiche () const
    { point<T>::affiche () ; cout << "    Couleur : " << coul << endl ;
    }
} ;
int main ()
{     // un point à coordonnees de type float et couleur de type int
   pointcol <float, int> p (3.5, 2.8, 12) ; p.affiche () ;
      // un point à coordonnees de type unsigned long et couleur de type short
   pointcol <unsigned long, short> q (295467, 345789, 8) ; q.affiche () ;
}