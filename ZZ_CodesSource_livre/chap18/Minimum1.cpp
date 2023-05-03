// Minimum1
#include <iostream>
using namespace std ;
    // creation d’un patron de fonctions
template <typename T> T minimum (T a, T b)
{ if (a < b) return a ;   // ou return a < b ? a : b ;
        else return b ;
}
   // exemple d’utilisation du patron de fonctions minimum
int main()
{ int n=4, p=12 ;
  float x=2.5, y=3.25 ;
  cout << "min (n, p) = " << minimum (n, p) << endl ; //  int min(int, int)
  cout << "min (x, y) = " << minimum (x, y) << endl ; //  float min (float, float)
}