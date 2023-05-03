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
// Composite
#include <iostream>
#include <vector>
#include <memory>     // pour unique_ptr
using namespace std ;
class Composant
{ public :
   virtual void ajoute (Composant *) {}  // par defaut, ne fait rien
   virtual void affiche () = 0 ;  // a redefinir dans chaque classe concrete
   Composant (string nom_c) : nom (nom_c) { }
   virtual string getNom () { return nom ; }
   virtual ~Composant () {}  // ou, avec C++11 virtual ~Composant () = default ;
  private :
   string nom ;
} ;
class Cercle : public Composant
{ public :
   Cercle (string nom_c) : Composant (nom_c) { }
   virtual void affiche () { cout << "Cercle " << getNom() << endl ; }
} ;
class Rectangle : public Composant
{ public :
   Rectangle (string nom_c) : Composant (nom_c) { }
   virtual void affiche () { cout << "Rectangle " << getNom() << endl; }
} ;
class Groupe : public Composant
{ public :
  Groupe (string nom_c): Composant (nom_c), listeComposants(vector<Composant *>())
    { }
  virtual void ajoute (Composant *c) { listeComposants.push_back (c) ; }
  virtual void affiche ()
  { cout << "---- Groupe " << getNom() << " contenant : " << endl ;
    for (auto & compo : listeComposants)  compo->affiche() ;
    cout << "-------- fin groupe " << getNom() << endl ;
  }
  private :
    vector<Composant *> listeComposants ;
} ;
int main ()    /*************** Version pointeurs natifs *********************/
{ Cercle *c1 = new Cercle ("C1") ; Cercle *c2 = new Cercle ("C2") ;
   Rectangle r1 ("R1") ;   // objet automatique
   c1->affiche () ;
   Groupe *ga = new Groupe ("GA") ; ga->ajoute(c1) ; ga->ajoute(&r1) ; ga->affiche () ;
   Groupe *gb = new Groupe ("GB") ; gb->ajoute(ga) ; gb->ajoute(c2) ;  gb->affiche () ;
   delete c1 ; delete c2 ;
   delete ga ; delete gb ;
}
int main () /**** Version pointeurs intelligents (pour les objets dynamiques ****/
{  unique_ptr<Cercle> c1 (new Cercle ("C1")) ;
   unique_ptr<Cercle> c2  (new Cercle ("C2")) ;
   Rectangle r1 ("R1") ;   // objet automatique
   c1->affiche () ;
   unique_ptr<Groupe> ga (new Groupe ("GA")) ;
   ga->ajoute(c1.get()) ; ga->ajoute(&r1) ; ga->affiche () ;
   unique_ptr<Groupe> gb (new Groupe ("GB")) ;
   gb->ajoute(ga.get()) ; gb->ajoute(c2.get()) ;  gb->affiche () ;
}