// Strategy
#include <iostream>
#include <memory>         // pour unique_ptr
using namespace std ;
class ModeAffichage
{ public :
    virtual void presente (int x, int y) = 0 ;
    virtual ~ModeAffichage () { }    // ou, avec C++11  = default
} ;
class AffichageCourt : public ModeAffichage
{ public :
    void presente (int x, int y)
    { cout << x << " " << y << endl ; }
} ;
class AffichageLong : public ModeAffichage
{ public :
    void presente (int x, int y)
    { cout << "abscisse = " << x << " ordonnee = " << y << endl ; }
} ;
class Point
{ public :
    Point (int abs, int ord, ModeAffichage *amode) : x(abs), y(ord), mode(amode)  { }
    void affiche () { mode->presente(x, y) ; }
  private :
    int x, y ;
    ModeAffichage *mode ;   // strategie d'affichage
} ;
int main ()    /*************** Version pointeurs natifs *********************/
{ ModeAffichage *court = new AffichageCourt () ;
  Point *p1 = new Point (2, 9, court ) ; p1->affiche () ;
  Point p2 (4, 7, new AffichageLong()) ; p2.affiche () ;
  delete p1 ;
}
int main () /**** Version pointeurs natifs (pour les objets dynamiques) *****/
{ unique_ptr<ModeAffichage> court (new AffichageCourt ()) ;
  unique_ptr<Point> p1 (new Point (2, 9, court.get())) ; p1->affiche () ;
  Point p2 (4, 7, new AffichageLong()) ; p2.affiche () ;
}