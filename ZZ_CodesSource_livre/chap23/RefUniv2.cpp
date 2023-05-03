// RefUniv2
#include <iostream>
using namespace std;
void f(int && n) { cout << " -- f ( int && ) --" << endl ; }
void f (int & n) { cout << " -- f ( int &  ) --" << endl ; }
template <class T> void g (T&& n) { cout << " -- g( T&& ) ---" << endl ; }
template <class T> void g (T& n)  { cout << " -- g( T&  ) ---" << endl ; }
int main()
{  f(5) ;
   int n = 5 ;
   f(n) ; g(n) ; g(5) ;
}