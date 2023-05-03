// TransObjetArgumentRef
#include <iostream>
using namespace std ;
// Declaration et definition classe point (comme au § 5.1)
   .....
void f (point & p)
{ p.affiche() ; p.deplace (1, 4) ; p.affiche() ;
}
int main()
{ point a(1, 3);
  f(a) ;  a.affiche() ;    // a modifie par f
}