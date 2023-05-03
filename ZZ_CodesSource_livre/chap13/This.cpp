// This
#include <iostream>
using namespace std ;
class point                     // Une classe point contenant seulement :
{ public :
                                    // Un constructeur ("inline")
   point (int abs=0, int ord=0) : x(abs), y(ord) { } 
   void affiche () ;                // Une fonction affiche 
  private :
   int x, y ;
} ;
void point::affiche ()
{ cout << "Adresse : " << this << " - Coordonnees " << x << " " << y << endl ; }
int main()                          // Un petit programme d’essai
{ point a(5), b(3,15) ;
  a.affiche ();
  b.affiche ();
} 