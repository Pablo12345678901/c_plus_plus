// Tas2
#include <iostream>
#include <algorithm>
using namespace std ;
void affiche (const int *, int) ;
int main()
{ int t[] = { 5, 1, 7, 0, 6, 4, 6, 8 , 9 } ;
  cout << "sequence t complete     : " ; affiche (t, 9) ; 
  make_heap (t, t+7) ;  // 7 premiers elements de t ordonnes en tas
  cout << "tas t (1-7) initial     : " ; affiche (t, 7) ;
  push_heap (t, t+8) ;  // ajoute t[7] au tas precedent  
  cout << "tas t (1-8) apres push  : " ; affiche (t, 8) ;
  push_heap (t, t+9) ;  // ajoute t[8] au tas precedent
  cout << "tas t (1-9) apres push  : " ; affiche (t, 9) ;
  sort_heap (t, t+9) ;  // trie le tas 
  cout << "tas t (1-9) trie        : " ; affiche (t, 9) ;
}

void affiche (const int *t, int nel)
{ for (int i=0 ; i<nel ; i++) cout << t[i] << " " ;
  cout << endl ;
}