// Union
#include <iostream>
using namespace std ;
int main()
{ union essai  { long n ;
                 float x ;
               } u ;
  cout << "dans cette implementation, int = " << sizeof(int)
       << ", float = " << sizeof(float) << endl ;
  cout << "donnez un nombre reel : "  ;
  cin >> u.x ;
  cout << "En entier, cela fait : " << u.n << "\n"  ;
}