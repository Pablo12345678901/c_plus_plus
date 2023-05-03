// ClassePoint
#include <iostream>
using namespace std ;
  // ------------ Declaration de la classe point ------------------
class point
{      // declaration des membres publics
  public :
   void initialise (int, int) ;
   void deplace (int, int) ;
   void affiche () ;
      // declaration des membres prives
  private :
   int x ;
   int y ;
} ;
  // ----- Definition des fonctions membres de la classe point ----
void point::initialise (int abs, int ord)
{ x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{ x = x + dx ; y = y + dy ;
}
void point::affiche ()
{ cout << "Je suis en " << x << " " << y << "\n" ;
}
  // -------- Utilisation de la classe point ----------------------
int main()
{  point a, b ;
   a.initialise (5, 2) ; a.affiche () ;
   a.deplace (-2, 4) ;  a.affiche () ;
   b.initialise (1,-1) ; b.affiche () ;
}