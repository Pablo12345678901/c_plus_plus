// FabriqueAbstraite
#include <iostream>
#include <memory>     // pour unique_ptr
using namespace std ;
class BoutonRadio     // classe abstraite pour les boutons radio
{ public :
    virtual string type ()= 0 ;
    virtual ~BoutonRadio() { } // ou, avec C++11 : virtual ~BoutonRadio()=default ;
} ;
class BoutonRadioA : public BoutonRadio
{ public :
    string type () { return "Bouton radio Style A" ; }
} ;
class BoutonRadioB : public BoutonRadio
{ public :
    string type () { return "Bouton radio style B" ; }
} ;
class CaseCocher   // classe abstraite pour les cases a cocher
{ public :
    virtual string identification () = 0 ;
    virtual ~CaseCocher() { } // ou, avec C++11 : virtual ~CaseCocher() = default ;
} ;
class CaseCocherA : public CaseCocher
{ public :
    string identification () { return "Case a cocher style A" ; }
} ;
class CaseCocherB : public CaseCocher
{ public :
    string identification () { return "Case a cocher style B" ; }
} ;
class FabriqueAbstraite   // classe abstraite pour les fabriques
{ public :
    virtual BoutonRadio *creerBoutonRadio () = 0 ;
    virtual CaseCocher  *creerCaseCocher () = 0 ;
    virtual ~FabriqueAbstraite() { }   // ou, avec C++11 = default ;
} ;
class FabriqueStyleA : public FabriqueAbstraite
{ public :
    BoutonRadio *creerBoutonRadio ()  { return new BoutonRadioA ()  ; }
    CaseCocher  *creerCaseCocher ()   { return new CaseCocherA () ; }
} ;
class FabriqueStyleB : public FabriqueAbstraite
{ public :
    BoutonRadio *creerBoutonRadio ()  { return new BoutonRadioB () ; }
    CaseCocher  *creerCaseCocher ()   { return new CaseCocherB () ; }
} ;
int main ()    /*************** Version pointeurs natifs *********************/
{ auto *f  = new FabriqueStyleA() ;    // auto possible ici car f 
                                       // ne change pas de type
  auto br1 = f->creerBoutonRadio () ; cout << br1->type () << endl ;
  auto cc  = f->creerCaseCocher ()  ; cout << cc->identification () << endl ;
  auto br2 = f->creerBoutonRadio () ; cout << br2->type () << endl ;
  delete br1 ; delete cc ; delete br2 ; delete f ;
}
int main ()    /*************** Version pointeurs intelligents ***************/
{ unique_ptr<FabriqueAbstraite> f (new FabriqueStyleA()) ;
  unique_ptr<BoutonRadio> br1(f->creerBoutonRadio ()) ;
  cout << br1->type () << endl ;
  unique_ptr<CaseCocher> cc(f->creerCaseCocher ())  ;
  cout << cc->identification () << endl ;
  unique_ptr<BoutonRadio> br2(f->creerBoutonRadio ()) ;
  cout << br2->type () << endl ;
}