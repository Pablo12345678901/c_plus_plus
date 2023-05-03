// GdObjetAvecConst
#include <iostream>
#include <memory>
using namespace std;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) {}
   void deplace (int dx, int dy)  { x += dx ; y += dy ; }
   void affiche ()
    { cout << "Je suis en " << x << " " << y << endl ; }
  private :
   int x, y ;
} ;
int main()
{   // **** gestion dynamique d'un point avec pointeurs natifs ***********
  point*adp1 = new point(1, 2) ;   // ou auto adp1 = new point(1, 2) ;
  adp1->affiche() ; adp1->deplace(3, 5) ; adp1->affiche() ;
  point*adp2 = new point() ;       // ou new point
  adp2->affiche() ;
  delete adp1 ; delete adp2 ;      // a ne pas oublier
    // **** gestion dynamique d'un point avec un unique_ptr (C++11) ******
  unique_ptr <point> up1 (new point(2, 5)) ;  
    // ou, depuis C++14 :  auto up1 = make_unique<point>(2, 5) ;  
  up1->affiche() ; up1->deplace(4, 2) ; up1->affiche() ;
  unique_ptr <point> up2 (new point()) ;  
    // ou, depuis C++14 :  auto up2 = make_unique<point>() ;  //() obligatoires
  up2->affiche() ;
}