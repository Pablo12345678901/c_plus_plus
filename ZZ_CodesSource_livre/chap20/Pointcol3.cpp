// Pointcol3
#include <iostream>
using namespace std ;
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
{ public :
   void colore (short cl) { couleur = cl ; }
   void affiche () const ;              // redefinition de affiche de point
   void initialise (int, int, short) ;  // redefinition de initialise de point
  private :
   short couleur ;
} ;
void pointcol::affiche () const
{  point::affiche () ;                  // appel de affiche de la classe point
   cout << "     et ma couleur est : " << couleur << endl ;
}
void pointcol::initialise (int abs, int ord, short cl)
{  point::initialise (abs, ord) ;       // appel de initialise de la classe point
   couleur = cl ;
}
int main()
{ pointcol p ;
  p.initialise (10,20, 5) ; p.affiche () ;
  p.point::affiche () ;              // pour forcer l’appel de affiche de point
  p.deplace (2,4) ;          p.affiche () ;
  p.colore (2) ;             p.affiche () ;
}