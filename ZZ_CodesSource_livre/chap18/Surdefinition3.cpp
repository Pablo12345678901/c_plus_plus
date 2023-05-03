// Surdefinition3
#include <iostream>
using namespace std ;
template <typename T> T minimum (T a, T b)        // patron I
{  if (a < b) return a ;
         else return b ;
}
template <typename T> T minimum (T * t, int n)   // patron II
{  int i ;
   T min = t[0] ;
   for (i=1 ; i<n ; i++) if (t[i] < min) min=t[i] ;
   return min ;
}
int main()
{  long n=2, p=12 ;
   float t[6] = {2.5, 3.2, 1.5, 3.8, 1.1, 2.8} ; 
   cout << minimum (n, p) << "\n" ;    // patron I    long minimum (long, long)
   cout << minimum (t, 6) << "\n" ;    // patron II   float minimum (float *, int)
}