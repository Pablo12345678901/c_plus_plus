// SURDEFNEWDELETE
#include <iostream>
#include <cstddef>               // pour size_t
#include <memory>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord)    // constructeur
   { npt++ ;  cout << "++ Creation    " << x << " " << y << " - " << npt_dyn 
                   << " points dyn" << " sur un total de " << npt << endl ;
   }
   ~point ()                                         // destructeur
   { npt-- ; cout << "-- Destruction " << x << " " << y << " - " << npt_dyn 
                  << " points dyn" << " sur un total de " << npt << endl ;
   }
   void * operator new (size_t sz)                   // new surdefini
   { npt_dyn++ ;
     cout << "++ Allocation dynamique - il y a " << npt_dyn 
          << " points dyn" << endl ;
     return ::new char[sz] ;
   }
   void operator delete (void * dp) noexcept
   { npt_dyn-- ; cout << "-- Destruction dynamique - il reste " << npt_dyn 
                      << " points dyn" << endl ;
     ::delete (dp) ;     // warning : deleting void* is undefined
   }
   private :
    static int npt ;              // nombre total de points
    static int npt_dyn ;          // nombre de points "dynamiques"
    int x, y ;
} ;
int point::npt = 0 ;       // initialisation membre statique npt
int point::npt_dyn = 0 ;   // initialisation membre statique npt_dyn
int main()
{  point * ad1, * ad2 ;
   point a(1,5) ;
   ad1 = new point (2,3) ;
   point b ;
   ad2 = new point (3,0) ;
   delete ad1 ;
   point c(2) ;
   delete ad2 ;
   auto up = make_unique<point> (4, 9) ; // C++14 uniquement
}