// Pointcol1
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

       /* --- Declaration et definition de la classe pointcol ----- */
class pointcol : public point        // pointcol derive de point
{ public :
   void colore (short cl)  { couleur = cl ; }
  private :
   short couleur ;
} ;
int main()
{ pointcol p ;
  p.initialise (10,20) ; p.colore (5) ;
  p.affiche () ;
  p.deplace (2,4) ;
  p.affiche () ;
}