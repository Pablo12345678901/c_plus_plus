// Multiset
#include <iostream>
#include <set>
using namespace std ;
void affiche (const multiset<char> &) ;
int main()
{ string t = "je me figure ce zouave qui joue du xylophone" ;
  string v = "aeiouy" ;
  multiset<char> let(&t[0], &t[t.length()]), let_bis ;
  multiset<char> voy(&v[0], &v[v.length()]) ;
  cout << "lettres presentes    : " ; affiche (let) ;
  cout << "il y a " << let.size() << " lettres en tout\n" ;
  cout << "la lettre e est presente " << let.count('e') << " fois\n" ;
  cout << "la lettre b est presente " << let.count('b') << " fois\n" ;
  let_bis = let ;
   // avant C++11, declarer :  multiset<char>::iterator iv ;
  for (auto iv=voy.begin() ; iv!=voy.end() ; iv++)
    let.erase(*iv) ;
  cout << "lettres sans voyelles : " ; affiche (let) ;
}
void affiche (const multiset<char> & e )    // ********** version C++11 **********
{ for (auto el : e)  cout << el ;
  cout << endl ;
}
void affiche (const multiset<char> & e )    // ********** version C++98 **********
{ multiset<char>::const_iterator ie ;
  for (ie=e.begin() ; ie!=e.end() ; ie++)  cout << *ie ;
  cout << endl ;
}