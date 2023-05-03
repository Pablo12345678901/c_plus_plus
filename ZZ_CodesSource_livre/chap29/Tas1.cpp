// Tas1
#include <iostream>
#include <algorithm>
using namespace std ;
void affiche (const int [], int) ;
int main()
{ const int N = 9 ;
  int t[N] = { 5, 1, 8, 0, 9, 4, 6, 3, 4 } ;
  cout << "sequence t initiale     : " ; affiche (t, N) ; 
  make_heap (t, t+N) ;  // t est maintenant ordonne en tas
  cout << "tas t initial           : " ; affiche(t, N) ;
  sort (t, t+N) ;       // t est trie mais n’est plus un tas
  cout << "sequence t triee        : " ; affiche(t, N) ;
  sort (t, t+N) ;       // resultat incoherent car t n’est plus un tas
  cout << "sequence t triee 2 fois : " ; affiche(t, N) ;
  make_heap (t, t+N) ;  // t est a nouveau ordonne en tas
  cout << "tas t nouveau           : " ; affiche(t, N) ;
}

void affiche (const int *t, int nel)
{ for (unsigned int i=0 ; i<nel ; i++) cout << t[i] << " " ;
  cout << endl ;
}