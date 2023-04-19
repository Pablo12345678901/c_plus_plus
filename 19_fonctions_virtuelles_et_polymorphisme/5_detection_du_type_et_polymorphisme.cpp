#include <iostream>
#include <typeinfo>
using namespace std ;

class point
{   public :
        virtual void affiche() {}
        virtual ~point() {} // au cas où il faille utiliser la polimorphie sur le destructeur
} ;
class pointcoul : public point
{   public :
        void affiche() {} ;
} ;

int main()
{   point p ;
    pointcoul pc ;
    point * adp = &p ;
    cout << "Type de adp : " << typeid(adp).name() << endl ;
    cout << "Type de *adp : " << typeid(*adp).name() << endl ;
    cout << endl ;
    adp = &pc ; // adp pointe désormais sur la partie point de pc
    cout << "adp = &pc" << endl ;
    cout << endl ;
    cout << "Type de adp : " << typeid(adp).name() << endl ;
    cout << "Type de *adp : " << typeid(*adp).name() << endl ;
}