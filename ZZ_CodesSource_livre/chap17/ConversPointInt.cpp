// ConverPointInt
#include <iostream>
using namespace std ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord) // constructeur 0, 1 ou 2 arg
    { cout << "++ construction point : " << x << " " << y << endl ;
    }
    operator int() const            // conversion point --> int
                                    // C++11 : explicit possible - voir remarque
    { cout << "== appel int() pour le point " << x << " " << y << endl ;
      return x ;
    }
  private :
    int x, y ;
} ;
int main()
{  point a(3,4), b(5,7) ;
   int n1, n2 ;
   n1 = int(a) ;  // appel explicite de int ()
             // on peut aussi écrire :  n1 = (int) a  ou n1 = static_cast<int> (a)
   cout << "n1 = " << n1 << endl ; 
   n2 = b ;  // appel implicite de int()
             // (C++11) : refuse si operator int () declare explicit - voir remarque
   cout << "n2 = " << n2 << endl ;
} 