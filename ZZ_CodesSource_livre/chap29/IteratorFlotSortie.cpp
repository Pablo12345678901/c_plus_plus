// IteratorFlotSortie
#include <iostream>
#include <list>
#include <iterator>    // pour ostream_iterator
using namespace std ;
int main()
{ string t = {"essai iterateur de flot"} ;
  list<char> l(&t[0], &t[t.length()]) ;
  ostream_iterator<char> flcar(cout) ;
  *flcar = 'x' ; *flcar = '-' ;      
  flcar++ ; flcar++ ; /* pour montrer que l’incrementation est inoperante ici */
  *flcar = ':' ;
  copy (l.begin(), l.end(), flcar) ;
}