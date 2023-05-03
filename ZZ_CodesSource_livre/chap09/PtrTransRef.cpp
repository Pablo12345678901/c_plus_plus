// PtrTransRef
#include <iostream>
using namespace std ;
void echange (int *ad1, int *ad2) ;
int main()
{  int a=10, b=20 ;
   cout << "-- Avant appel : " << a << " " << b  << endl ;
   echange (&a, &b) ;
   cout << "-- Apres appel : " << a << " " << b  << endl ;
}
void echange (int *ad1, int *ad2)
{  int x = *ad1 ;  *ad1 = *ad2 ; *ad2 = x ; }