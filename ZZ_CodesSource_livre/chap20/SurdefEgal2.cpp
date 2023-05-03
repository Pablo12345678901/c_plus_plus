// SurdefEgal2
#include <iostream>
using namespace std ;
class point
{  public :
     point (int abs=0, int ord=0) : x(abs), y(ord) { }
     point & operator = (const point & a)
      {  x = a.x ; y = a.y ;
        cout << "operateur = de point \n" ;
        return * this ;
      }
   protected :
     int x, y ;
} ;
class pointcol : public point
{ public :
   pointcol (int abs=0, int ord=0, int cl=1) : point (abs, ord), coul(cl) { }
   pointcol & operator = (const pointcol & b)
    { point * ad1 ;
      const point * ad2 ;  // pour permettre ad2 = &b 
      cout << "operateur = de pointcol\n" ;
      ad1 = this ;    // conversion pointeur sur pointcol en pointeur sur point
      ad2 = & b ;     //   idem
      * ad1 = * ad2 ; // affectation de la "partie point" de b
      coul = b.coul ; // affectation de la partie propre à pointcol
      return * this ;
    }
   void affiche () const
    { cout << "pointcol : " << x << " " << y << " " << coul << "\n" ;
    }
  protected :
   int coul ;
} ;
int main()
{ pointcol p(1, 3, 10) , q(4, 9, 20) ;
  cout << "p       = " ; p.affiche () ;
  cout << "q avant = " ; q.affiche () ;
  q = p ;
  cout << "q apres = " ; q.affiche () ;
}