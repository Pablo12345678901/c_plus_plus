// FonctVirt1
#include <iostream>
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
{  point p(3,5) ; point * adp = &p ;
   pointcol pc (8,6,2) ; pointcol * adpc = &pc ;
   adp->affiche () ; adpc->affiche () ;
   cout << "-----------------\n" ;
   adp = adpc ;             //  adpc = adp serait rejeté
   adp->affiche () ; adpc->affiche () ;
}