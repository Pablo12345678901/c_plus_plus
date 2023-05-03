// PolymorphismeUnique_ptr
#include <iostream>
#include <memory>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   virtual void affiche () const
     { cout << "Je suis un point \n" ;
       cout << "   mes coordonnees sont : " << x << " " << y << endl ; 
     }
  protected :            // pour que x et y soient accessibles à pointcol
   int x, y ;
} ;
class pointcol : public point
{ public :
   pointcol (int abs=0, int ord=0, short cl=1) : point (abs, ord), couleur(cl) {} 
   void affiche () const
     { cout << "Je suis un point colore \n" ;
       cout << "   mes coordonnees sont : " << x << " " << y ;
       cout << "   et ma couleur est :    " << couleur << endl ;
     }
  private :
   short couleur ;
} ;
int main()
{ unique_ptr<point> up = make_unique<point> (3, 4) ;
  unique_ptr<pointcol> upc = make_unique<pointcol> (5, 9, 5) ;
  up->affiche () ; upc->affiche () ; cout << "---------------\n" ;
  up = move (upc) ;
  up->affiche () ; // upc->affiche () ne fonctionnerait pas (upc nul)
}