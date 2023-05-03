// Surdef[]1
#include <iostream>
using namespace std ;
class vect
{ public :
   vect (int n) : nelem(n), adr(new double [n]) {}
   ~vect () {delete [] adr ;}
   double & operator [] (int) ;   // attention, pas const ici, voir remarque
  private :
   int nelem ;
   double * adr ;
} ;
double & vect::operator [] (int i)
{ return adr[i] ;
}
int main()
{  vect a(3), b(3), c(3) ;
   for (int i=0 ; i<3 ; i++) {a[i] = i ; b[i] = 2*i ; }
   for (int i=0 ; i<3 ; i++) c[i] = a[i] + b[i] ;
   for (int i=0 ; i<3 ; i++) cout << c[i] << " " ;
}