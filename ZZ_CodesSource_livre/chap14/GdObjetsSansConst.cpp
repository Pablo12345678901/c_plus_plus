// GdObjetSansConst
#include <iostream>
#include <memory>
using namespace std ;
class point    // classe sans constructeur
{ public :
   void initialise (int abs, int ord) { x = abs ; y = ord ; }
   void deplace (int dx, int dy) { x += dx ; y += dy ; }
   void affiche () { cout << "Je suis en " << x << " " << y << endl ; }
  private :
   int x, y ;
} ;
int main()
{     // ********** gestion dynamique d'un point avec pointeurs natifs ********
   point * adp = new point ; 
   adp->initialise (1, 2) ; adp->affiche() ; adp->deplace(3, 5) ; adp->affiche() ;
      // ******** gestion dynamique d'un point avec un unique_ptr (C++11) *****
   unique_ptr<point> up (new point) ;
      // ou (C++14) :   auto up = make_unique<point>() 
   up->initialise (2, 5) ; up->affiche() ; up->deplace(4, 2) ; up->affiche() ;
      // ou : (*up).initialise .........
}