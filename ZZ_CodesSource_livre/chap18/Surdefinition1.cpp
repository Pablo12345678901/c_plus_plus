// Surdefinition1
#include <iostream>
using namespace std ;
   // patron numero I
template <typename T> T minimum (T a, T b)
{   if (a < b) return a ;
         else return b ;
}
   // patron numero II
template <typename T> T minimum (T a, T b, T c)
{  return minimum (minimum (a, b), c) ;
}
int main()
{ int n=12, p=15, q=2 ;
  float x=3.5, y=4.25, z=0.25 ;
  cout << minimum (n, p) << "\n" ;    // patron I  int minimum (int, int)
  cout << minimum (n, p, q) << "\n" ; // patron II int minimum (int, int, int)
  cout << minimum (x, y, z) << "\n" ; // patron II float minimum (float,float,float)
}