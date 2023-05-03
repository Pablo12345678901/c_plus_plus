//BoucleInfinie
#include <iostream>
using namespace std ;
int main()
{ int n ;
  do
  { cout << "donnez un nombre entier : " ;
    cin >> n ;
    cout << "voici son carre : " << n*n << endl ;
  }
  while (n!=-1) ;
}