// ConstCopyDef
#include <iostream>
using namespace std ;
class vect
{ public :
   vect (int n) : nelem (n),adr(new double[n])
   {  cout << "++ const. usuel - adr objet : " << this
          << " - adr vecteur : " << adr << endl ;
   }
   ~vect ()           
   { cout << "-- Destr. objet - adr objet : "
         << this << " - adr vecteur : " << adr << endl ;
     delete[] adr ;
   }
  private :
   int nelem ;      // nombre d'elements
   double * adr ;   // adresse de ces elements
} ;
void fct (vect b)
{ cout << "*** appel de fct ***\n" ; }
int main()
{ vect a(5) ;
  fct (a) ;
}