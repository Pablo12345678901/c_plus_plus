// Deque
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std ;
void affiche (const deque<char> &) ;
int main()
{  string mot = {"xyz"} ;
   deque<char> pile(&mot[0], &(mot[3])) ; affiche(pile) ;
   pile.push_front('a') ;                 affiche(pile) ;
   pile[2] = '+' ;
   pile.push_front('b') ;
   pile.pop_back() ;                      affiche(pile) ;
   auto ip = find (pile.begin(), pile.end(), 'x') ;
      // avant C++11 declarer : deque<char>::iterator ip ;   
   pile.erase(pile.begin(), ip) ;         affiche(pile) ;
}
void affiche (const deque<char> & d)
{  for (auto x : d) cout << x <<  " " ;
     // avant C++1, faire :
     // for (unsigned int i=0 ; i<d.size() ; i++) cout << d[i] << " " ;
   cout << endl ;
} 