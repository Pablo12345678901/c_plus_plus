// Initialiszer_list
#include <iostream>
using namespace std;
int main()
{  int n = 10 ; float x = 5.25 ;
   initializer_list<int> li = {1, 3, 5, n, n+5, 'a'} ;  // ’a’ est converti en int
   initializer_list<double> ld = {1, 3, x, x*x } ;      // 1 et 3 en double
   cout << "liste li = " ;
   for (int i : li) cout << i << " " ;
   cout << endl ;
   cout << "liste ld = " ;
   for (double d : ld) cout << d << " " ;
   cout << endl ;
   //  for (int & i :li) n++ ;    interdit ici - voir remarque
}