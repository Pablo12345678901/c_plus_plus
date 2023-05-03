// Exception1
#include <iostream>
#include <cstdlib>       // pour exit 
using namespace std ;
 /* déclaration de la classe vect */
class vect
{ public :
    vect (int) ;
    ~vect () ;
    int & operator [] (int) ;
  private :
    int nelem ;
    int * adr ;
} ;
 /* declaration et definition d’une classe vect_limite (vide pour l’instant) */
class vect_limite
{  } ;
 /* definition de la classe vect */
vect::vect (int n) : nelem(n), adr (new int [n]) { }
vect::~vect ()
{ delete [] adr ;
}
int & vect::operator [] (int i)
{ if (i<0 || i>nelem)
   { vect_limite l ;
     throw (l) ;      // declenche une exception de type vect_limite
   }
  return adr [i] ;
}
 /* test interception exception vect_limite */
int main ()
{ try
  { vect v(10) ;
    v[11] = 5 ;    /* indice trop grand */
  }
  catch (vect_limite l)  /* nom d’argument superflu ici */
  { cout << "exception limite \n" ;  exit (-1) ;
  }
}