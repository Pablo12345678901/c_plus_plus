// Template Method
#include <iostream>
#include <memory>
using namespace std ;
class Forme
{ public :
    void affiche ()   // ici, non virtuelle
    { afficheNature () ;
      cout << "-- Coordonnees = " << x << " " << y << endl ;
      afficheAutresInfos () ;
    }
    virtual void afficheNature () = 0 ;     // a redefinir obligatoirement
    virtual void afficheAutresInfos () { }  // version par defaut si pas redefinie
    Forme (int abs, int ord) : x(abs), y(ord) {}
    virtual ~Forme() { }                 // ou, depuis C++11 = default
  protected :
    int x, y ;        // pour eviter pb acces dans classes derivees
} ;
class Point : public Forme
{ public :
    Point (int abs, int ord) : Forme (abs, ord) { }
    virtual void afficheNature () { cout << "Je suis un Point" << endl ; }
    // ici, on ne redefinit pas afficheAutresInfos
} ;
class Cercle : public Forme
{ public :
    Cercle (int abs, int ord, double ray) : Forme (abs, ord) , r(ray) { }
    virtual void afficheNature () { cout << "Je suis un Cercle" << endl ; }
    virtual void afficheAutresInfos ()  { cout << "-- Rayon = " << r << endl ; }
  private :
    double r ;
} ;
int main ()    /*************** Version pointeurs natifs *********************/
{ Forme *p = new Point(2, 5) ;  p->affiche () ;  // auto inutilisable ici
  p = new Cercle (1, 2, 5.25) ; p->affiche () ;
  Cercle c (3, 8, 4.5) ; c.affiche () ;
  delete p ;
}
int main () /*** Version pointeurs intelligents (pour les objets dynamiques) ****/
{ unique_ptr<Forme> p (new Point(2, 5)) ;  p->affiche () ;  // auto inutilisable ici
  p = unique_ptr<Forme> (new Cercle (1, 2, 5.25)) ; p->affiche () ;
  Cercle c (3, 8, 4.5) ; c.affiche () ;
}