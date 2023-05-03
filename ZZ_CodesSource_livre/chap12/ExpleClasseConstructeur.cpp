//ExpleClasseConstructeur
#include <iostream>
using namespace std ;
  // ------------ Declaration de la classe point -------------
class point
{ public :    // declaration des membres publics
    point (int, int) ;      // constructeur
    void deplace (int, int) ;
    void affiche () ;
  private :   // declaration des membres privés
    int x ;
    int y ;
} ;
  // ----- Definition des fonctions membre de la classe point ---- */
point::point (int abs, int ord)  // il existe une meilleure façon d’ecrire
{    x = abs ; y = ord ;         // le constructeur - voir §4.3
}
void point::deplace (int dx, int dy)
{    x = x + dx ; y = y + dy ;
}
void point::affiche ()
{    cout << "Je suis en " << x << " " << y << "\n" ;
}
  //-------- Utilisation de la classe point --------
int main()
{  point a(5,2) ;  // autres declarations possibles depuis C++11 - voir remarque
   a.affiche () ;
   a.deplace (-2, 4) ;  a.affiche () ;
   point b(1,-1) ;
   b.affiche () ;
}