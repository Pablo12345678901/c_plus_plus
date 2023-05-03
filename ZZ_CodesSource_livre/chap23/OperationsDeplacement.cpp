//OperationsDeplacement
#include <iostream>
#include <memory>
using namespace std ;
class vect
{  int nelem ;                   // nombre d’elements
   unique_ptr<double[]> adr ;    // pointeur sur ces elements
  public :
     // ----------------- constructeur "usuel" ----------------------------
   vect (const int n) : nelem(n), adr(make_unique<double[]>(n)) // C++14, sinon :
                               // adr (new double[n])           // C++11
   { cout << "+ const. usuel   - obj cree : " << this << " - " << adr.get() << endl ;
   }
     // ----------------- constructeur de recopie -------------------------
  vect (const vect & v) : nelem(v.nelem), 
                          adr(make_unique<double[]>(v.nelem))  // C++14, sinon :
                       // adr (new double [v.nelem]            // C++11
   { for (int i=0 ; i<nelem ; i++) adr[i]=v.adr[i] ;
     cout << "+ const. recopie - obj cree : " << this << " - " << adr.get() << endl ;
   }
     // ----------------- constructeur de deplacement ---------------------
  vect (vect && v) : nelem (v.nelem), adr(move(v.adr))
   { cout << "+ const. depl - obj cree    : " << this << " - " << adr.get() << endl ;
     cout << "              - obj deplace : " << &v << " - " << v.adr.get() << endl ;
   }
    // ----------------- affectation copie (usuelle)------------------------
   vect& operator= (const vect & v)
   { cout << "= operateur = copie sur     : " << this << " - " << &v << endl ;
     if (this != &v)
      { cout << "  efface vecteur dynamique  : " << adr.get() << endl ;
        nelem = v.nelem ;
        adr = make_unique <double[]>(nelem) ;   // C++14 - avec C++11, faire :
           //  unique_ptr<double[]> temp (new double[nelem]) ; adr = move(temp) ;
        cout << "  nouveau vecteur dynamique : " << adr.get() << endl ;
        for (int i=0 ; i<nelem ; i++) adr[i] = v.adr[i] ;
      }
     else cout << "  on ne fait rien \n" ;
     return * this ;
   }
     // affectation par deplacement ---------------------------------------
   vect & operator= (vect && v)
   { cout << "= appel op = deplace sur    : " << this << " - " << &v << endl ;
     if (this != &v)
      { cout << "  Avant affec - depl de     : " << &v << " - " << v.adr.get() << endl ;
        cout << "              - vers        : " << this << " - " << adr.get() << endl ;
       nelem = v.nelem ; adr = move(v.adr) ; 
        cout << "  Apres affec - depl de     : " << &v << " - " << v.adr.get() << endl ;
        cout << "              - vers        : " << this << " - " << adr.get() << endl ;
      }
     else cout << "  on ne fait rien \n" ;
     return *this ;
   }
    // destructeur
   ~vect ()
   { cout << "- Destr. objet              : " << this << " - " << adr.get() << "\n" ;
   }
} ;
vect  fct (vect  v)
{ cout << "*** appel de fct ***\n" ;
  return v ;
}
int main()
{ vect a(5) ;
  vect b(fct(a)) ;  // fct(a) temporaire -> appel const par deplacement
  a = b ;
  a = move(a) ;
  a = move(b) ;     // appel on force affectation par deplacement
                    // ne plus utiliser b ensuite
  // a = b ;        // ici, serait rejeté en compilation puisque l’operateur
                    //   d’affectation par defaut n’est pas genere (voir remarque)
 }