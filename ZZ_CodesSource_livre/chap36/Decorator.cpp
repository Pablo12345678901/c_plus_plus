// Decorator
#include <iostream>
#include <memory>      // pour unique_ptr
using namespace std ;
class Affichable
{ public :
    virtual void affiche () = 0 ;
    virtual ~Affichable() { }
} ;
class Point : public Affichable
{ public :
    Point (int abs, int ord) : x(abs), y(ord) { }
    void affiche ()
    { cout << "coordonnees = " << x << " " << y << endl ; }
  private :
    int x, y ;
} ;

class Coloration : public Affichable
{ public :
    Coloration (Affichable *pt, int cc) : p(pt), c(cc) { }
    void affiche ()
    { p->affiche(); cout << "+++ couleur " << c << endl  ; 
    }
  private :
    Affichable *p ;
    int c ;
} ;
class Forme : public Affichable
{ public :
    Forme (Affichable *pt, char fc) : p(pt), f(fc) { }
    void affiche () 
    { p->affiche() ; cout << "+++ forme " << f << endl ; }
  private :
     Affichable *p ;
     char f ;
} ;
int main ()    /*************** Version pointeurs natifs *********************/
{  auto adp1 = new Point (6, 5) ;
   Affichable *pc = new Coloration (adp1 , 10) ;  // auto serait utilisable
      // ici, car pc ne change pas de type, mais il n'en ira pas toujours ainsi
   pc->affiche() ;
   auto adp2 = new Point (1, 4) ;
   Affichable *pf = new Forme (adp2, '*') ; pf->affiche () ;  // meme remarque
   Affichable *pcf = new Forme (pc, '+') ;  pcf->affiche () ; // meme remarque
   delete adp1 ; delete adp2 ;  delete pc ; delete pf ; delete pcf ;
}
int main ()    /*************** Version pointeurs intelligents ***************/
{  unique_ptr<Point> adp1 (new Point (6, 5)) ;  // avec auto, adp1 serait Point *
   unique_ptr<Affichable> pc (new Coloration (adp1.get(), 10)) ; // auto utilisable
    // ici, car pc ne change pas de type, mais il n'en ira pas toujours ainsi
   pc->affiche() ;
   unique_ptr<Point> adp2 (new Point (1, 4)) ;  // avec auto, adp2 serait Point *
   unique_ptr<Affichable> pf (new Forme (adp2.get(), '*')) ;// auto utilisable
    // ici, car pf ne change pas de type, mais il n'en ira pas toujours ainsi
   pf->affiche () ;
   unique_ptr<Affichable> pcf (new Forme (pc.get(), '+')) ; // auto utilisable
    // ici, car pcf ne change pas de type, mais il n'en ira pas toujours ainsi
   pcf->affiche () ;
}
