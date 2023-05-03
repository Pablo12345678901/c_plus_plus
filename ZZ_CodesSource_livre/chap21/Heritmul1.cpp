// Heritmul1
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs, int ord) : x(abs), y(ord) 
     { cout << "++ Constr. point \n" ; }
   ~point () { cout << "-- Destr. point \n" ; }
   void affiche () const
    { cout << "Coordonnees : " << x << " " << y << "\n" ;
    }
  private :
    int x, y ;
} ;

class coul
{ public :
    coul (int cl) : couleur(cl)
     { cout << "++ Constr. coul \n" ; }
    ~coul () { cout << "-- Destr.  coul \n" ; }
    void affiche () const
     { cout << "Couleur : " << couleur << "\n" ;
     }
  private :
    short couleur ;
} ;

class pointcoul : public point, public coul 
{  public :
    pointcoul (int, int, int) ;
    ~pointcoul () { cout << "---- Destr. pointcoul \n" ; }
    void affiche () const
     { point::affiche () ; coul::affiche () ; 
     } 
} ;
pointcoul::pointcoul (int abs, int ord, int cl) : point (abs, ord), coul (cl)
{ cout << "++++ Constr. pointcoul \n" ;
}

int main()
{  pointcoul p(3,9,2) ;
   cout << "------------\n" ;
   p.affiche () ;                 // appel de affiche de pointcoul
   cout << "------------\n" ;
   p.point::affiche () ;          // on force l’appel de affiche de point
   cout << "------------\n" ;
   p.coul::affiche () ;           // on force l’appel de affiche de coul
   cout << "------------\n" ;
}