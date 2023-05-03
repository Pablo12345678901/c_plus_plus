// DerivationPatron2
#include <iostream>
using namespace std ;
template <typename T> class point
{ public :
    point (T abs=0, T ord=0) : x(abs), y(ord) { }
    void affiche () const
    { cout << "Coordonnees : " << x << " " << y << endl ; }
  private :
    T x ; T y ;
} ;
template <typename T> class pointcol : public point <T>
{  T coul ;
  public :
   pointcol (T abs=0, T ord=0, T cl=1) : point <T> (abs, ord), coul(cl) { }
   void affiche () const
   { point<T>::affiche () ; cout << "    Couleur : " << coul ; }
} ;
int main ()
{  point <long> p (34, 45) ; p.affiche () ;
   pointcol <short> q (12, 45, 5) ; q.affiche () ;
}