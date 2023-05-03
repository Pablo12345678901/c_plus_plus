// VectorForGene
#include <iostream>
#include<vector>
using namespace std;
int main()
{ vector<int> v { 1, 3, 5 } ;
  cout << "En A, v = " ;
  for (auto e : v) cout << e << " " ; cout << endl ;   
  for (unsigned int i=0 ; i<v.size() ; i++) v[i]++ ;
  cout << "En B, v = " ;
  for (auto e : v) cout << e << " " ; cout << endl ;   
  for (auto e : v) e++ ;
  cout << "En C, v = " ;
  for (auto e : v) cout << e << " " ; cout << endl ;   
  for (auto & e : v) e++ ;
  cout << "En D, v = " ;
  for (int e : v) cout << e << " " ; cout << endl ;  
}