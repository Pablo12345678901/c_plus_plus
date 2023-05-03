// SurdefPlusPlus
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   point operator ++ ()      // notation prefixee 
                             // on pourrait faire point & operator ++ ()
   { x++ ; y++ ; return *this ;
   }
   point operator ++ (int n) // notation postfixee
                             // on ne peut pas faire point & operator ++ (int n)
   { point p = *this ;
     x++ ; y++ ;
     return p ;
   }
   void affiche () const
   { cout << x << " " << y << "\n" ; }
  private :
   int x, y ;
} ;
int main()
{ point a1 (2, 5), a2(2, 5), b ;
  b = ++a1 ; cout << "a1 : " ; a1.affiche () ;   // affiche    a1 : 3 6
             cout << "b  : " ; b.affiche () ;    // affiche    b  : 3 6
  b = a2++ ; cout << "a2 : " ; a2.affiche () ;   // affiche    a2 : 3 6
             cout << "b  : " ; b.affiche () ;    // affiche    b  : 2 5
}