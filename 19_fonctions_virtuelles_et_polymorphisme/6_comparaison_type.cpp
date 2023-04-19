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
    pointcoul pc1, pc2 ;
    void comparaison_type(point &p1, point &p2) ; // déclaration prototype
    comparaison_type(p, pc1) ;
    comparaison_type(pc1, pc2) ;
}

void comparaison_type(point &p1, point &p2)
{   cout << "Type objet 1 : " << typeid(p1).name() << endl ;
    cout << "Type objet 2 : " << typeid(p2).name() << endl ;
    if (typeid(p1)==typeid(p2)) cout << "Types identiques" << endl ;
    else cout << "Types différents" << endl ;
}