// FonctVirt2
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   virtual void identifie() const
    { cout << "Je suis un point \n" ; }
   void affiche () const
    { identifie () ;
      cout << "Mes coordonnees sont : " << x << " " << y << endl ;
    }
  private :
   int x, y ;
} ;
class pointcol : public point
{ public :
   pointcol (int abs=0, int ord=0, int cl=1 ) : point (abs, ord), couleur(cl){ }
   void identifie () const
    { cout << "Je suis un point colore de couleur : " << couleur << "\n" ; }
  private :
   short couleur ;
} ;
int main()
{ point p(3,4) ; pointcol pc(5,9,5) ;
  p.affiche () ; pc.affiche () ;      cout << "---------------\n" ;
  point * adp = &p ; pointcol * adpc = &pc ;
  adp->affiche () ; adpc->affiche () ; cout << "---------------\n" ;
  adp = adpc ;
  adp->affiche () ; adpc->affiche () ;
}