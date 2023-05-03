// Pointcol2
#include <iostream>
using namespace std ;
class point
{           /* declaration des membres publics */
  public :
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () const ;
            /* declaration des membres prives */
  private :
    int x, y ;
} ;
void point::initialise (int abs, int ord)
{ x = abs ; y = ord ; }
void point::deplace (int dx, int dy)
{ x = x + dx ; y = y + dy ; }
void point::affiche () const
{ cout << "Je suis en " << x << " " << y << endl ; }
class pointcol : public point
{  short couleur ;
 public :
   void colore (short cl)
       { couleur = cl ; }
   void affichec () const ;
   void initialisec (int, int, short) ;
} ;
void pointcol::affichec () const
{  affiche () ;
   cout << "     et ma couleur est : " << couleur << "\n" ;
}
void pointcol::initialisec (int abs, int ord, short cl)
{  initialise (abs, ord) ;
   couleur = cl ;
}
int main()
{ pointcol p ;
  p.initialisec (10,20, 5) ; p.affichec () ; p.affiche () ;
  p.deplace (2,4) ;          p.affichec () ;
  p.colore (2) ;             p.affichec () ;
}
