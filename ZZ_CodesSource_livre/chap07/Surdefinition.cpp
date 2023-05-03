// Surdefinition
#include <iostream>
using namespace std ;
void sosie (int) ;              // les prototypes
void sosie (double) ;
int main ()                     // le programme de test
{  int n=5 ;
   double x=2.5 ;
   sosie (n) ;
   sosie (x) ; 
}
void sosie (int a)              // la premiere fonction
{  cout << "sosie numero I   a = " << a << endl ;
}
void sosie (double a)           // la deuxieme fonction
{   cout << "sosie numero II  a = " << a << endl ;
}