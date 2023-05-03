#include <iostream>
using namespace std ;
int main ()
{  int n ;
   cout << "donnez un entier : " ;
   cin >> n ;
   switch (n)
   {  case 0 : cout << "nul\n" ;
      case 1 : cout << "un\n" ;
      case 2 : cout << "deux\n" ;
   }
   cout << "au revoir\n" ;
}
