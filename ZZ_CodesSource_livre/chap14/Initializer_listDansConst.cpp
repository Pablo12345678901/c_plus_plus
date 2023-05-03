//Initializer_listDansConstr
#include <iostream>
using namespace std ;
class point
{ public :
    point (int abs=0, int ord=0) : x(abs), y(ord)
    { cout << "constructeur int, int       " << x << " " << y << endl ; }
    point (initializer_list<int> c ) : x(0), y(0)  // valeurs ignorees au dela de 2
    { unsigned int nb = c.size() ;
      auto deb = c.begin() ; x = *deb ;
      if (nb == 1) y =0 ;
      else { deb++ ; y = *deb ; }
      cout << "constr initializer_list (" << c.size() <<") " << x << " " << y << endl ;
    }
  private :
    int x, y ;
} ;
int main()
{   // ******************** initialisation directe ****************************
  point p1 ; point p2 {} ; point p3 ({}) ;
  point q1(1) ; point q2 {2} ; // q1 (1.5) accepte       q2 {1.5} refuse
  point s1 (1, 2) ;  point s2 {2, 4} ;
   // ********************* initialisation copie ****************************
   //   instructions rejetees si les constructeurs sont declares explicit :
  point p4 = {} ;
  point r3 = 3 ; point r4 = (4) ; point r5 = {5} ;
  point s3 = (3, 6) ; point s4 = {4, 8} ;
}