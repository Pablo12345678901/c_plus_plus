#include <iostream>
#include <typeinfo>
using namespace std ;

// Conversion dynamique fonctionne si le type d'arrivée :
//      est identique au type de départ
//      ou est ascendant (descendant = interdit)
// si B hérite de A
// conversion de :
//      A en A = ok
//      A en B = pas ok
//      B en A = ok
//      B en B = ok

class A
{   public :
        A() {cout << "Construction d'un objet de type A." << endl ;}
        virtual void affiche() {cout << "AFFICHE : class A : " << typeid(this).name() << endl ;}
        virtual ~A() {cout << "Destruction d'un objet de type A." << endl ;}
} ;
class B : public A
{   public :
        B() {cout << "Construction d'un objet de type B." << endl ;}
        virtual void affiche() {cout << "AFFICHE : class B : " << typeid(this).name() << endl ;}
        virtual ~B() {cout << "Destruction d'un objet de type B." << endl ;}
} ;
class C : public B
{   public :
    C() {cout << "Construction d'un objet de type C." << endl ;}
    virtual void affiche() {cout << "AFFICHE : class B : " << typeid(this).name() << endl ;} // virtual optionnel ici
    virtual ~C() {cout << "Destruction d'un objet de type C." << endl ;} // virtual optionnel ici
} ;

int main()
{   A a1, a2 ;
    B b1, b2 ;
    C c1, c2 ;
    A * ptra1, * ptra2 ;
    B * ptrb1, * ptrb2 = &b2 ;
    C * ptrc1 = &c1, * ptrc2 = &c2 ;
    cout << endl ;

    cout << "AVEC DYNAMIC_CAST : conversion A -> A : type identique       = ok" << endl ;
    ptra1 = &a1 ;
    ptra2 = &a2 ;
    cout << "AVANT : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    ptra1 = dynamic_cast<A*> (ptra2) ;
    cout << "APRES : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    cout << endl ;

    cout << "AVEC (CAST) :       conversion A -> A : type identique       = ok" << endl ;
    ptra1 = &a1 ;
    ptra2 = &a2 ;
    cout << "AVANT : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    ptra1 = (A*) ptra2 ;
    cout << "APRES : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    cout << endl ;

    cout << "AVEC DYNAMIC_CAST : conversion A -> B : type descendant      = pas ok" << endl ;
    ptra1 = &a1 ;
    ptrb1 = &b1 ;
    cout << "AVANT : type : " << typeid(ptrb1).name() << " et valeur : " << ptrb1 << endl ;
    ptrb1 = dynamic_cast<B*> (ptra1) ;
    cout << "APRES : type : " << typeid(ptrb1).name() << " et valeur : " << ptrb1 << endl ;
    cout << endl ;

    cout << "AVEC (CAST) :       conversion A -> B : type descendant      = pas ok" << endl ;
    ptra1 = &a1 ;
    ptrb1 = &b1 ;
    cout << "AVANT : type : " << typeid(ptrb1).name() << " et valeur : " << ptrb1 << endl ;
    ptrb1 = (B*) ptra1 ;
    cout << "APRES : type : " << typeid(ptrb1).name() << " et valeur : " << ptrb1 << endl ;
    cout << endl ;
    

    cout << "conversion A -> C : type descendant      = pas ok" << endl ;
    ptra1 = &a1 ;
    ptrc1 = &c1 ;
    cout << "AVANT : valeur : " << ptrc1 << endl ;
    ptrc1 = dynamic_cast<C*> (ptra1) ;
    cout << "APRES : valeur : " << ptrc1 << endl ;
    cout << endl ;

    cout << "AVEC DYNAMIC_CAST : conversion B -> A : type ascendant       = ok" << endl ;
    ptrb1 = &b1 ;
    ptra1 = &a1 ;
    cout << "AVANT : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    ptra1 = dynamic_cast<A*> (ptrb1) ;
    cout << "APRES : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    cout << endl ;

    cout << "AVEC (CAST) :       conversion B -> A : type ascendant       = ok" << endl ;
    ptrb1 = &b1 ;
    ptra1 = &a1 ;
    cout << "AVANT : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    ptra1 = dynamic_cast<A*> (ptrb1) ;
    cout << "APRES : type : " << typeid(ptra1).name() << " et valeur : " << ptra1 << endl ;
    cout << endl ;

    cout << "conversion B -> B : type identique       = ok" << endl ;
    ptrb1 = &b1 ;
    ptrb2 = &b2 ;
    cout << "AVANT : valeur : " << ptrb1 << endl ;
    ptrb1 = dynamic_cast<B*> (ptrb2) ;
    cout << "APRES : valeur : " << ptrb1 << endl ;
    cout << endl ;

    cout << "conversion B -> C : type descendant      = pas ok" << endl ;
    ptrb1 = &b1 ;
    ptrc1 = &c1 ;
    cout << "AVANT : valeur : " << ptrc1 << endl ;
    ptrc1 = dynamic_cast<C*> (ptrb1) ;
    cout << "APRES : valeur : " << ptrc1 << endl ;
    cout << endl ;

    cout << "conversion C -> A : type ascendant       = ok" << endl ;
    ptrc1 = &c1 ;
    ptra1 = &a1 ;
    cout << "AVANT : valeur : " << ptra1 << endl ;
    ptra1 = dynamic_cast<A*> (ptrc1) ;
    cout << "APRES : valeur : " << ptra1 << endl ;
    cout << endl ;

    cout << "conversion C -> B : type ascendant       = ok" << endl ;
    ptrc1 = &c1 ;
    ptrb1 = &b1 ;
    cout << "AVANT : valeur : " << ptrb1 << endl ;
    ptrb1 = dynamic_cast<B*> (ptrc1) ;
    cout << "APRES : valeur : " << ptrb1 << endl ;
    cout << endl ;

    cout << "conversion C -> C : type identique       = ok" << endl ;
    ptrc1 = &c1 ;
    ptrc2 = &c2 ;
    cout << "AVANT : valeur : " << ptrc1 << endl ;
    ptrc1 = dynamic_cast<C*> (ptrc2) ;
    cout << "APRES : valeur : " << ptrc1 << endl ;
    cout << endl ;
}