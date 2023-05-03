#include <iostream>
using namespace std ;
int main ()
{  int n ;
   cout << "donnez un entier : " ;
   cin >> n ;
   switch (n)
   {  case 0  : cout << "nul\n" ; break ;
      case 1  :
      case 2  : cout << "petit\n" ;
      case 3  :
      case 4  :
      case 5  : cout << "moyen\n" ; break ;
      default : cout << "grand\n" ;
   }
}