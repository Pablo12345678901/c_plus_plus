// DefConstCopy
#include <iostream>
using namespace std ;
class vect
{ public :
   vect (int n) : nelem (n),adr(new double[n])   // constructeur "usuel"
   {  cout << "++ const. usuel -   adr objet : " << this
          << " - adr vecteur : " << adr << endl ;
   }
   ~vect () 
    { cout << "-- Destr. objet -   adr objet : "
          << this << " - adr vecteur : " << adr << endl ;
      delete[] adr ;
    }
             // constructeur de recopie
   vect (const vect & v) : nelem (v.nelem), adr(new double[v.nelem])
   { for (int i=0 ; i<nelem ; i++) adr[i]=v.adr[i] ;
     cout << "++ const. recopie - adr objet : " << this
          << " - adr vecteur : " << adr << endl ;
   }
private :
   int nelem ;      // nombre d'elements
   double * adr ;   // addresse de ces elements
} ;

void fct (vect b)
{ cout << "*** appel de fct ***\n" ; }
int main()
{ vect a(5) ;    // Avec C++11, voir §5
  fct (a) ;
}