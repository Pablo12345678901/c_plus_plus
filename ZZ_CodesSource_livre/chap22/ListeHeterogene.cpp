// ListeHeterogene
#include <iostream>
using namespace std ;
// **************** classe mere ********************************************
class mere
{ public :
    virtual void affiche ()const = 0 ;  // fonction virtuelle pure
    virtual ~mere ()  { } ;         // pour pouvoir appliquer le polymorphisme
} ;                                 //  aux destructeurs (voir paragraphe 5.6.3)
// ********************* classe liste **************************************
struct element                           // structure d'un element de liste
{ element * suivant ;                    // pointeur sur l'element suivant
  mere * contenu ;                       // pointeur sur un objet quelconque
} ;
class liste
{  element * debut ;                      // pointeur sur premier element
   element * courant ;                    // pointeur sur element courant
 public :
   liste () : debut(nullptr), courant (nullptr) { }   // constructeur
   ~liste () ;                            // destructeur
   void ajoute (mere *) ;                 // ajoute un element
   void premier ()                        // positionne sur premier elment
    { courant = debut ;  }
   mere * prochain ()    // fournit l'adresse de l'element courant (0 si fin)
                         // et positionne sur prochain element (rien si fin)
    { mere * adsuiv = nullptr ;
      if (courant != nullptr) { adsuiv = courant -> contenu ;
                                courant = courant -> suivant ;
                              }
      return adsuiv ;
    }
   void affiche_liste () ;      // affiche tous les elements de la liste
   int fini () { return (courant == nullptr) ; }
   liste (const liste &) = delete ;  // construction par copie interdite (C++11)
   liste & operator = (const liste &) = delete ;  // affectation interdite (C++11)
} ;
liste::~liste ()
{ element * suiv ;
  courant = debut ;
  while (courant != nullptr )
   { suiv = courant->suivant ; delete courant ; courant = suiv ; }
}
void liste::ajoute (mere * chose)
{ element * adel = new element ;
  adel->suivant = debut ; adel->contenu = chose ;
  debut = adel ;
}
void liste::affiche_liste ()
{ mere * ptr ;
  premier() ;
  while ( ! fini() )
    { ptr = (mere *) prochain() ;
      ptr->affiche () ;
    }
}
// **************** classe point *******************************************
class point : public mere
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   void affiche () const
    { cout << "Point de coordonnees : " << x << " " << y << endl ; }
   private :
    int x, y ;
} ;
// **************** classe complexe ****************************************
class complexe : public mere
{ public :
   complexe (double r=0, double i=0) : reel(r), imag(i) { }
   void affiche () const
    { cout << "Complexe : " << reel << " + " << imag << "i\n" ; }
  private :
   double reel, imag ;
} ;
// **************** programme d'essai **************************************
int main()
{ liste l1 ;
  point a(2,3), b(5,9) ;
  complexe x(4.5,2.7), y(2.35,4.86) ;
  l1.ajoute (&a) ; l1.ajoute (&x) ; l1.affiche_liste () ;
  cout << "--------\n" ;
  l1.ajoute (&y) ; l1.ajoute (&b) ; l1.affiche_liste () ;
}