// ArgDefaut
#include <iostream>
using namespace std ;
class point
{ public :
   point () ;                    // constructeur 1 (sans argument)
   point (int) ;                 // constructeur 2 (un argument)
   point (int, int) ;            // constructeur 3 (deux arguments)
   void affiche (string = "") ;  // fonction affiche (un argument par defaut)
  private :
   int x, y ;
} ;
point::point () : x(0), y(0) { }                        // constructeur 1
point::point (int abs) : x(abs), y(abs) { }             // constructeur 2
point::point (int abs, int ord) : x(abs), y(ord) { }    // constructeur 3
void point::affiche (string message)    // fonction affiche 
{  cout << message << "Je suis en : " << x << " " << y << endl ; 
}
int main()
{  point a ;                      // appel constructeur 1
   a.affiche () ;               
   point b (5) ;                  // appel constructeur 2
   b.affiche ("Point b - ") ;  
   point c (3, 12) ;              // appel constructeur 3
   c.affiche ("Hello ---- ") ; 
}