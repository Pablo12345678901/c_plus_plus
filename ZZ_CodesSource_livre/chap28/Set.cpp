// Set
#include <iostream>
#include <set>
#include <string>
using namespace std ;
void affiche (const set<char> &) ;
int main()
{ string t = "je me figure ce zouave qui joue du xylophone" ;
  string v = "aeiouy" ;
  set<char> let(&t[0], &t[t.length()]), let_bis ;
  set<char> voy(&v[0], &v[v.length()]) ;

  cout << "lettres presentes         : " ; affiche (let) ;
  cout << "il y a " << let.size() << " lettres differentes\n" ;
  if (let.count('z'))  cout << "la lettre z est presente\n" ;
  if (!let.count('b')) cout << "la lettre b n’est pas presente\n" ;

  let_bis = let ;
  // avant C++11, declarer : set<char>::iterator iv ; 
  for (auto iv=voy.begin() ; iv!=voy.end() ; iv++)
    let.erase(*iv) ;
  cout << "lettres sans voyelles     : " ; affiche (let) ;
  let.insert(voy.begin(), voy.end()) ;
  cout << "lettres + toutes voyelles : " ; affiche (let) ;
}
void affiche (const set<char> & e )   // ********** version C++11 **********
{ for (auto el : e)  cout << el << " " ;
  cout << endl ;
}
void affiche (const set<char> &e )    // ********** version C++98 **********
{ set<char>::const_iterator ie ;
  for (ie=e.begin() ; ie!=e.end() ; ie++) cout << *ie << " " ;
  cout << endl ;
}