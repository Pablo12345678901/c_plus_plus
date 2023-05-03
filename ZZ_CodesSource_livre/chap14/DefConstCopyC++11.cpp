// DefConstCopyC++11
#include <iostream>
#include <memory>
using namespace std ;
class vect
{ public :
   vect (int n) : nelem (n),adr(make_unique<double[]>(n))  // constructeur "usuel"
   {  cout << "++ const. usuel -   adr objet : " << this
           << " - adr vecteur : " << adr.get() << endl ;
   }
   ~vect ()             
    { cout << "-- Destr. objet -   adr objet : "
          << this << " - adr vecteur : " << adr.get() << endl ;
    }
              // constructeur de recopie
   vect (const vect & v) : nelem (v.nelem), adr(make_unique<double[]>(v.nelem))
   { for (int i=0 ; i<nelem ; i++) adr[i]=v.adr[i] ;
     cout << "++ const. recopie - adr objet : " << this
          << " - adr vecteur : " << adr.get() << endl ;
   }
private :
   int nelem ;                  // nombre d'elements
   unique_ptr<double[]> adr ;   // addresse de ces elements
} ;
void fct (vect b)
{ cout << "*** appel de fct ***\n" ;
}
int main()
{ vect a(5) ;    // Avec C++11, voir §5
  fct (a) ;
}