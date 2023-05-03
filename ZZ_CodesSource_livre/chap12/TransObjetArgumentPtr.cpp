// TransObjetArgumentPtr
#include <iostream>
using namespace std ;
class point
{ public :
   point (int, int) ;
   void deplace (int, int) ;
   void affiche () ;
  private :
   int x, y ;
} ;
point::point (int abs, int ord) : x(abs), y(ord) { }
void point::deplace (int dx, int dy)
{ x = x + dx ; y = y + dy ; }
void point::affiche ()
{ cout << "Je suis en " << x << " " << y << endl ; }
void f (point * adp)   // ici, on ne verifie pas que adp est non nul
{ adp->affiche() ;          // ou :  (*adp).affiche() ;
  adp->deplace (1, 4) ;     // ou :  (*adp).deplace (1, 4) ;
  adp->affiche() ;          // ou :  (*adp).affiche() ;
}
int main()
{ point a(1, 3);
  f(&a) ;  a.affiche() ;    // a modifie par f
}
