// VecteurIndices
#include <iostream>
#include <iomanip>
#include <valarray>
#include <cstdlib>    // pour size_t
using namespace std ;
int main()
{ size_t ind[] = { 1, 4, 2, 3, 0 } ;         // superflu avec C++11
  valarray <size_t> indices (ind, 5) ;       // contient 1, 4, 2, 3, 0
   // C++11 - initializer_list non explicit - on peut faire (= possible) :
   // valarray <size_t> indices { 1, 4, 2, 3, 0 } ;
  for (unsigned int i=0 ; i<5 ; i++) cout << setw(8) << indices[i] ;  
  cout << endl ;
  float tf [] =  { 1.25, 2.5, 5.2, 8.3, 5.4 } ;  // superflu avec C++11
  valarray <float> vf1 (tf, 5) ;
   // C++11 - initializer_list non explicit - on peut faire (= possible) :
   // valarray <float> vf1 { 1.25, 2.5, 5.2, 8.3, 5.4 } ; 
  valarray <float> vf2(5) ;
  vf2[indices] = vf1 ;   // affecte vf1[i] à vf2 [indices[i]]
  for (unsigned int i=0 ; i<5 ; i++) cout << setw(8) << vf2[i] ; 
  cout << endl ;
}