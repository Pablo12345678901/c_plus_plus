// FactoryMethod1
#include <iostream>
#include <cstdlib>
#include <memory>     // pour unique_ptr
using namespace std ;
class Logo
{ public :
   virtual void affiche () = 0 ;
   virtual ~Logo() {} ;  // ou mieux, depuis C++11 : virtual ~Logo() = default ;
} ;
class LogoCercle : public Logo
{ public :
    void affiche () { cout << "Logo circulaire" << endl ; }
} ;
class LogoRectangle : public Logo
{ public :
    void affiche () { cout << "Logo rectangle" << endl ; }
} ;
class FabriqueLogoHasard
{ public :
    Logo *getLogo()
    { int n = rand () ;
      if (n < RAND_MAX/2) return new LogoCercle () ;
                     else return new LogoRectangle () ;
    }
} ;                    
int main ()    /*************** Version pointeurs natifs *********************/
{ FabriqueLogoHasard fab  ;
    for (int i = 0 ; i<4 ; i++)
    { Logo *l = fab.getLogo() ;   // auto (C++11) utilisable ici car l est recree
                                  // a chaque tour de boucle
      l->affiche() ;
      delete l ;
    }
}
int main ()    /*************** Version pointeurs intelligents ***************/
{ FabriqueLogoHasard fab  ;   
    for (int i = 0 ; i<4 ; i++)
    { unique_ptr<Logo> l (fab.getLogo()) ;   // ici, avec auto, le code fonctionne
                                             // mais l est de type Logo *  
      l->affiche() ;
    }
}