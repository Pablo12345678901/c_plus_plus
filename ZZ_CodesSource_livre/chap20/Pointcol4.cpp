// Pointcol4
#include <iostream>
using namespace std ;
         // ************ classe point *********************
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord)  // constructeur de point 
    { cout << "++ constr. point :    " << abs << " " << ord << "\n" ; }
    ~point ()                                      // destructeur de point 
    { cout << "-- destr.  point :    " << x << " " << y << "\n" ;
    }
  private :
   int x, y ;
} ;
         // ************ classe pointcol ******************
class pointcol : public point 
{  public :
    pointcol (int, int, short) ;         // declaration constructeur pointcol
    ~pointcol ()                         // destructeur de pointcol ("inline")
     { cout << "-- dest. pointcol - couleur : " << couleur << "\n" ; }
   private :
    short couleur ;
} ;
pointcol::pointcol (int abs=0, int ord=0, short cl=1) 
                    : point(abs, ord), couleur(cl)
{ cout << "++ constr. pointcol : " << abs << " " << ord << " " << cl << "\n" ; }
         // ************ programme d’essai ****************
int main()   
{  pointcol a(10,15,3) ;              // objets 
   pointcol b (2,3) ;                 // automatiques
   pointcol c (12) ;                  //  .....
   pointcol * adr ;
   adr = new pointcol (12,25) ;       // objet dynamique
   delete adr ;
}