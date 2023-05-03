// MaxMin
#include <iostream>
#include <algorithm>
#include <functional>      // pour greater<int>  
using namespace std ;
int main()
{ int t[] = {5, 4, 1, 8, 3, 9, 2, 9, 1, 8} ;
  int * ad ;
  ad = max_element(t, t+sizeof(t)/sizeof(t[0])) ;
  cout << "plus grand elem de t en position " << ad-t
       << " valeur " << *ad << endl ;
  ad = min_element(t, t+sizeof(t)/sizeof(t[0])) ;
  cout << "plus petit elem de t en position " << ad-t
       << " valeur " << *ad << endl ;
  ad = max_element(t, t+sizeof(t)/sizeof(t[0]), greater<int>()) ;
  cout << "plus grand elem avec greater<int> en position " << ad-t
       << " valeur " << *ad << endl ;
}