// FloatExpo
#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{ float x = 2e5/3 ;
  double pi = 3.141926536 ;
  cout << fixed << "choix notation flottante \n" ;
  for (int i=1 ; i<8 ; i++)
   cout << "precision " << i << setprecision (i) << "  :" << x << ":  : "
                                                          << pi << ":\n" ;
  cout << scientific << "choix notation exponentielle \n" ;
  for (int i=1 ; i<8 ; i++)
   cout << "precision " << i << setprecision (i) << "  :" << x << ":  :"
                                                          << pi << ":\n" ;
}