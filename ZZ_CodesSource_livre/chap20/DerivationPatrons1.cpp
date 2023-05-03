// DerivationPatrons1
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
class pointcol_int : public point <int>
{ public :
    pointcol_int (int abs=0, int ord=0, int cl=1) : point <int> (abs, ord), coul(cl) 
    { }
    void affiche () const
    { point<int>::affiche () ; cout << "    Couleur : " << coul << endl ;  }
  private :
    int coul ;
} ;
int main ()
{  point <float> pf (3.5, 2.8) ; pf.affiche () ; // instanciation classe patron
   pointcol_int p (3, 5, 9) ; p.affiche ();  // emploi (classique) de poincol_int
}