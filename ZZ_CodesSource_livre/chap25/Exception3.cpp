// Exception3
#include <iostream>
#include <cstdlib>      // pour exit
using namespace std ;
 /* declaration de la classe vect */
class vect
{ public :
    vect (int) ;
    ~vect () ;
    int & operator [] (int) ;
  private :
    int nelem ;
    int * adr ;
} ;
 /* declaration - definition des deux classes exception */
class vect_limite
{ public :
   int hors ;             // valeur indice hors limites (public)
   vect_limite (int i) : hors(i) { }  // constructeur
} ;
class vect_creation
{ public :
   int nb ;               // nombre elements demandes (public)
   vect_creation (int i) : nb(i) { }  // constructeur
} ;
 /* definition de la classe vect */
vect::vect (int n)
{ if (n <= 0)
    { vect_creation c(n) ;     // anomalie
      throw c ;
    }
  adr = new int [nelem = n] ; // construction normale
}
vect::~vect ()
{ delete [] adr ; }
int & vect::operator [] (int i)
{ if (i<0 || i>nelem)
     { vect_limite l(i) ;     // anomalie
       throw l ;
     }
  return adr [i] ;            // fonctionnement normal
}
void f(int) ; 
int main()
{ cout << "avant appel de f(3) \n" ;
  f(3) ; 
  cout << "avant appel de f(8) \n" ;
  f(8) ;
  cout << "apres appel de f(8) \n" ;
}
void f(int n)
{ try
  { cout << "debut bloc try\n" ;
    vect v(5) ;   
    v[n] = 0 ;     // OK pour n=3 ; declenche une exception pour n=8 
    cout << "fin bloc try\n" ;
  }
  catch (vect_limite l)
  { cout << "exception indice " << l.hors << " hors limites \n" ; 
  }
  catch (vect_creation c)
  { cout << "exception creation\n" ;
  }
  // après le bloc try
  cout << "dans f apres bloc try - valeur de n = " << n << "\n" ;
}