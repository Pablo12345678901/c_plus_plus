// Tas3
#include <iostream>
#include <algorithm>
using namespace std ;
void affiche (const int *, int) ;
int main()
{ int t[] = { 5, 1, 7, 0, 6, 4, 6, 8 , 9 } ;
  cout << "sequence t complete     : " ; affiche (t, 9) ; 
  make_heap (t, t+9) ;  // 9 elements de t ordonnes en tas
  cout << "tas t (0-8) initial     : " ; affiche (t, 9) ;
  pop_heap  (t, t+9) ;  // enleve t[0] au tas precedent  
  cout << "tas t (0-7) apres pop   : " ; affiche (t, 8) ;
  cout << "    valeurs t[8] : " << t[8] << "\n" ;
  pop_heap  (t, t+8) ;  // enleve t[0] du tas precedent
  cout << "tas t (0-8) apres pop   : " ; affiche (t, 7) ;
  cout << "    valeurs t[7-8] : " << t[7] << " " << t[8] << "\n" ;
  sort_heap (t, t+7) ;  // trie le tas t[0-6] 
  cout << "tas t1 (0-6) trie       : " ; affiche (t, 7) ;
}  

void affiche (const int *t, int nel)
{ for (int i=0 ; i<nel ; i++) cout << t[i] << " " ;
  cout << endl ;
}