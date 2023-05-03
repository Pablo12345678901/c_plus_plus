// Gabarit
#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{  int n = 12345 ;
   for (int i=0 ; i<12 ; i++)
      cout << setw(2) << i << " : "<< setw(i) << n << ":\n" ;
}