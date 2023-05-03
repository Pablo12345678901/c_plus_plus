// SpecifExceptions1
#include <iostream>
using namespace std ;
void f(int) throw (int) ;
int main()
{ int n ;
  cout << "entier (0 a 2) : " ; cin >> n ;
  try  {  f(n) ; }
  catch (int)  { cout << "exception int dans main\n" ; }
  cout << "suite du bloc try du main\n" ;
}
void f(int n) throw (int)    // ou void f(int n) 
                             // ou void f(int n) noexcept (false) avec C++11
{ double d=0 ; int p=0 ;  float e=0 ;   // pour throw
  try
   { cout << "n = " << n << endl ;
     switch (n)
     { case 0 : throw d ; break ;
       case 1 : throw p ; break ;
       case 2 : throw e ; break ;
     }
   }
   catch (double)   { cout << "exception double dans f\n" ; }
   cout << "suite du bloc try dans f et retour appelant\n" ;
}