// SurdefAffectPtrsNatifs
#include <iostream>
using namespace std ;
class vect
 { public :
    vect (int n) : nelem(n), adr(new double [n])  // constructeur
    { for (int i=0 ; i<nelem ; i++) adr[i] = 0 ;
      cout << "++ obj taille " << nelem << " en " << this
           << " - v. dyn en " << adr << endl ;
    }
    ~vect ()                                  // destructeur
    { cout << "-- obj taille " << nelem << " en "
           << this << " - v. dyn en " << adr << endl ;
      delete [] adr ;
    }
    vect & operator = (const vect &) ;       // surdefinition operateur =
   private :
    int nelem ;                 // nombre d’elements
    double * adr ;              // pointeur sur ces elements
  } ;
vect & vect::operator = (const vect & v)
{ cout << "== appel operateur = avec adresses  " << this << " " << &v << endl ;
   if (this != &v)
        { cout << "  effacement vecteur dynamique en   " << adr << endl ;
          delete [] adr ;
          adr = new double [nelem = v.nelem] ;
          cout << "  nouveau vecteur dynamique en      " << adr << endl ;
          for (int i=0 ; i<nelem ; i++) adr[i] = v.adr[i] ;
        }
      else cout << "  on ne fait rien \n" ;
   return * this ;
}
int main()
{   vect a(5), b(3), c(4) ;
    cout << "** affectation a=b \n" ;
    a = b ;
    cout << "** affectation c=c \n" ;
    c = c ;
    cout << "** affectation a=b=c \n" ;
    a = b = c ;
}