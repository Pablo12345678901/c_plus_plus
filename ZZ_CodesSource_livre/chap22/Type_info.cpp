// Type_info
#include <iostream>
#include <typeinfo>     // pour typeid
using namespace std ;
class point
{ public :
     virtual void affiche () const { }  // ici vide - utile pour le polymorphisme
     virtual ~point () { }              // par precaution - voir paragraphe 5.6.3
} ;
class pointcol : public point
{ public :
     void affiche () const  { }  // ici vide
} ;
int main()
{ point p ; pointcol pc ; point * adp ;
  adp = &p ;
  cout << "type de adp  : " << typeid (adp).name()  << endl ;
  cout << "type de *adp : " << typeid (*adp).name() << endl  ;
  adp = &pc ;
  cout << "type de adp  : " << typeid (adp).name()  << endl ;
  cout << "type de *adp : " << typeid (*adp).name() << endl  ;
}