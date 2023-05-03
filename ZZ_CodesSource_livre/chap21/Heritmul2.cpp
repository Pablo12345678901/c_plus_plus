// Heritmul2
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs, int ord) : x(abs), y(ord) 
     { cout << "++ Constr. point " << abs << " " << ord << "\n" ; }
   point () : x(0), y(0)  // constr. par def necessaire pour derivations virtuelles
     { cout << "++ Constr. defaut point \n" ; }
   void affiche () const
    { cout << "Coordonnees : " << x << " " << y << "\n" ;  }
  private :
    int x, y ;
} ;

class coul
{ public :
   coul (short cl) : couleur(cl)
     { cout << "++ Constr. coul " << cl <<  "\n" ; 
     }
   void affiche () const
     { cout << "Couleur : " << couleur << "\n" ;
     }
  private :
   short couleur ;
} ;

class masse
{  int mas ;
  public :
   masse (int m) : mas(m)
     { cout << "++ Constr. masse " << m << "\n" ;
     }
   void affiche () const
     { cout << "Masse   : " << mas << "\n" ;
     }
 } ;

class pointcoul : public virtual point, public coul
{ public :
    pointcoul (int abs, int ord, int cl) : coul (cl)
      // pas d’info pour point car derivation virtuelle
    { cout << "++++ Constr. pointcoul " << abs << " " << ord << " "
                                        << cl << "\n" ;
    }
    void affiche () const
     { point::affiche () ; coul::affiche () ;
     }
} ;

class pointmasse : public virtual point, public masse
{ public :
    pointmasse (int abs, int ord, int m) : masse (m)
     // pas d’info pour point car derivation virtuelle
    { cout << "++++ Constr. pointmasse " << abs << " " << ord << " " 
                                         << m << "\n" ;
    }
    void affiche () const
     { point::affiche () ; masse::affiche () ;
     }
} ;

class pointcolmasse : public pointcoul, public pointmasse
{ public :
    pointcolmasse (int abs, int ord, short c, int m) : point (abs, ord),
      pointcoul (abs, ord, c), pointmasse (abs, ord, m)
      // infos abs ord en fait inutiles pour pointcol et pointmasse
    { cout << "++++ Constr. pointcolmasse " << abs + " " << ord << " "
                                            << c << " " << m << endl ;
    }
    void affiche () const
     { point::affiche () ; coul::affiche() ; masse::affiche () ;
     }
} ;

int main()
{  pointcoul p(3,9,2) ;
   p.affiche () ;                 // appel de affiche de pointcoul
   pointmasse pm(12, 25, 100) ;
   pm.affiche () ;
   pointcolmasse pcm (2, 5, 10, 20) ;
   pcm.affiche () ;
   int n ; cin >> n ;
}