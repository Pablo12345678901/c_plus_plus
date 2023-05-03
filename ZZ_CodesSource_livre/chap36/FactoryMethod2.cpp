// FactoryMethod2
#include <iostream>
#include <cstdlib>
#include <memory>    // pour unique_ptr
using namespace std ;
class Logo
{ public :
    virtual void affiche () = 0 ;
    virtual ~Logo() {} ;   // ou, avec C++11 : virtual ~Logo() = default ;
} ;
class LogoCercle : public Logo
{ public :
    void affiche () { cout << "Logo circulaire" << endl ; }
} ;
class LogoRectangle : public Logo
{ public :
    void affiche () { cout << "Logo rectangle" << endl  ; }
} ;
class FabriqueLogo
{ public :
    virtual Logo *getLogo() = 0 ;
    virtual ~FabriqueLogo() { }
} ;
class FabriqueLogoHasard : public FabriqueLogo
{ public :
    Logo *getLogo()
    { int n = rand () ;
      if (n < RAND_MAX/2) return new LogoCercle () ;
                     else return new LogoRectangle () ;
    }
} ;
class FabriqueLogoAlternes : public FabriqueLogo
{ public :
    Logo *getLogo ()
    {  if (indic) { indic = false ; return new LogoCercle() ; }
             else { indic = true ;  return new LogoRectangle () ; }
    }
  private :
    static bool indic ;
} ;
bool FabriqueLogoAlternes::indic = false ;    // initialisation membre statique
int main ()    /*************** Version pointeurs natifs *********************/
{ FabriqueLogo *fab  ;   // auto pas utilisable ici car fab change de type ensuite
  fab = new FabriqueLogoHasard () ;  // fab dynamique pour le polymorphisme
  cout << "--- avec Fabrique au hasard" << endl ;
  for (int i = 0 ; i<3 ; i++)
  { Logo *l = fab->getLogo() ; l->affiche(); delete l ; }
  delete fab ;
  fab = new FabriqueLogoAlternes () ;
  cout << "--- avec Fabrique alternee" << endl ;
  for (int i = 0 ; i<3 ; i++)
  { Logo *l = fab->getLogo() ; l->affiche(); delete l ; }
  delete fab ;
}
int main ()    /*************** Version pointeurs intelligents ***************/
{ unique_ptr<FabriqueLogo> fab (new FabriqueLogoHasard()) ;  
  cout << "--- avec Fabrique au hasard" << endl ;
  for (int i = 0 ; i<3 ; i++)
  { unique_ptr<Logo> l(fab->getLogo()) ; l->affiche() ; 
  }
  fab = unique_ptr<FabriqueLogo> (new FabriqueLogoAlternes()) ;
    // il n’est pas necessaire de faire  (voir &7 chap 23) :
    // fab = move (unique_ptr<FabriqueLogo> (new FabriqueLogoAlternes())) ;
  cout << "--- avec Fabrique alternee" << endl ;
  for (int i = 0 ; i<3 ; i++)
  { unique_ptr<Logo> l (fab->getLogo()) ; l->affiche() ; 
  }
}