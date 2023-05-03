// Surdefinition2
#include <iostream>
using namespace std ;
template <typename T> T minimum (T a, T b)      // patron numero I
{  if (a < b) return a ;
         else return b ;
}
template <typename T> T minimum (T * a, T b)    // patron numero II
{  if (*a < b) return *a ;
          else return b ;
}
template <typename T> T minimum (T a, T * b)    // patron numero III
{  if (a < *b) return a ;
          else return *b ;
}
int main()
{ int n=12, p=15 ;   float x=2.5, y=5.2 ;
  cout << minimum (n, p) << "\n" ;   // patron I    int minimum (int, int)
  cout << minimum (&n, p) << "\n" ;  // patron II   int minimum (int *, int)
  cout << minimum (x, &y) <<"\n" ;   // patron III  float minimum (float,float *)
  cout << minimum (&n, &p) << "\n" ; // patron I    int * minimum (int *, int *)
}