#include <iostream>
#include <list>
#include <iterator>
using namespace std ;

int main()
{
    string t = {"essai iterateur de flot\n"} ;
    list<char> l(&t[0], &t[t.length()]) ;
    ostreambuf_iterator<char> flcar(cout) ;
    *flcar = 'x' ;
    *flcar = '-' ;
    flcar++ ; // inopérant ici
    *flcar = ':' ;
    copy(l.begin(), l.end(), flcar) ;
}