#include <iostream>
using namespace std ;
int main ()
{  int n, som ;
   som = 0 ;
   while (som<100)
      { cout << "donnez un nombre : " ;
        cin >> n ;
        som += n ;
      }
   cout << "somme obtenue : " << som ;
}