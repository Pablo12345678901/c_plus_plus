// AllocateConstruct
#include <iostream>
#include <memory>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord)
   { cout << "++ Construction point : " << x << " " << y << " - " << this << endl ; }
   ~point ()
   { cout << "-- Destruction point :  " << x << " " << y << " - " << this << endl ; }
   void affiche()
   { cout << "Coordonnees : " << x << " " << y << endl ; }
  private :
   int x, y ;
} ;
int main()
{ constexpr int N = 9 ;
  allocator<point> pt_alloc  ;
  point *adeb = pt_alloc.allocate (N) ;  // allocation d'un bloc pour N(9) points
  point *ad1 = adeb ;
  pt_alloc.construct(ad1) ;             // construction point 1 - constr sans arg
  point *ad2 = adeb + 1 ;
  pt_alloc.construct(ad2, 2) ;          // construction point 2 - constr un arg
  point *ad3 = adeb + 2 ;
  pt_alloc.construct(ad3, 4, 6) ;       // construction point 3 - constf deux arg
  point *ad = adeb ;
  for (int i=0 ; i<3 ; i++) { ad-> affiche() ; ad++ ; }
  pt_alloc.destroy (ad2) ;             // destruction point 2
  pt_alloc.construct (ad2, 7, 9) ;     // construction nouveau point 2
  pt_alloc.destroy (ad1) ; pt_alloc.destroy (ad2) ; pt_alloc.destroy (ad3) ;
     // liberation emplacement (en bloc)
  pt_alloc.deallocate (adeb, N) ;      // bien respecter la valeur N d'origine
}