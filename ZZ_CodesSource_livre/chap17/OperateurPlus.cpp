// OperateurPlus
#include <iostream>
using namespace std ;
class complexe ;
class point
{  public :
     point (int abs=0, int ord=0) : x(abs), y(ord) { }
     operator complexe () ;
     void affiche () { cout << "point : " << x << " " << y << endl ; } 
   private :
     int x, y ;
 } ;
class complexe
{   double reel, imag ;
  public :
    complexe (double r=0, double i=0) : reel (r), imag(i) { }
    void affiche () { cout << reel << " + " << imag << "i \n" ; }
    friend point::operator complexe () ;
    friend complexe operator + (complexe, complexe) ;
} ;
point::operator complexe ()
{ complexe r ; r.reel = x ; r.imag = y ; return r ; }
complexe operator + (complexe a, complexe b)
{  complexe r ;
   r.reel = a.reel + b.reel ; r.imag = a.imag + b.imag ;
   return r ;
}
int main()
{  point a(3,4), b(7,9), c ;
   complexe  x(3.5,2.8), y ;
   y = x + a ; y.affiche () ;   // marcherait encore si + était fct membre
   y = a + x ; y.affiche () ;   // ne marcherait pas si + était fonction membre
   y = a + b ; y.affiche () ;   // ne marcherait pas si + était fonction membre
                                //       (voir remarque)
                                //  N.B. :  c = a + b n’aurait pas de sens ici
}