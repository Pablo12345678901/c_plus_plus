// Precision
#include <iomanip>
#include <iostream>
using namespace std ;
int main()
{ float x = 2000./3. ;
  double pi = 3.141926536 ;
  cout << "affichage de 2000/3 et de pi dans differentes precisions :\n" ;
  cout << "par defaut  :" << x << ":  :" << pi << ":\n" ;
  for (int i=1 ; i<8 ; i++)
   cout << "precision " << i << " :" << setprecision (i) << x << ":  :" << pi << ":\n" ;
}