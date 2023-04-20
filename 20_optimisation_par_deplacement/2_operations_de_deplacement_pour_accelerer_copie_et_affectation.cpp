#include <iostream>
#include <memory>
using namespace std;

class vect
{   private :
        int nbelem ;
        unique_ptr<double[]> adr ; // pointeur sur le tableau des éléments
    public :
        vect(const int n) : nbelem(n), adr(make_unique<double []>(n)) // constructeur
        {   cout << "Constr. usuel - objet crée : " << this << " - tableau de nb en : " << adr.get() << endl ;}
        vect(const vect &v) : nbelem(v.nbelem), adr(make_unique<double[]>(v.nbelem))// constructeur de recopie
        {   for (int i=0; i<nbelem; i++) adr[i] = v.adr[i] ;
            cout << "Constr. recopie - objet crée : " << this << " - tableau de nb en : " << adr.get() << endl ;
        }
        vect(vect &&v) : nbelem(v.nbelem), adr(move(v.adr))// constructeur de déplacement
        {   cout << "Constr. de déplacement - objet crée : " << this << " - tableau de nb en : " << adr.get() << endl ;
            cout << "                       - objet déplacé : " << &v << " - tableau de nb en : " << v.adr.get() << endl ;
        }
        vect operator = (const vect &v) // surdéfinition de l'opérateur d'affectation
        {   cout << "Opérateur = copie sur          : " << this << " de l'objet vecteur en : " << &v << endl ;
            if (this!=&v)
            {   cout << "Efface vecteur dynamique (car nb d'élément peut avoir changé): " << adr.get() << endl ;
                nbelem = v.nbelem ;
                adr = make_unique<double[]>(nbelem) ;
                cout << "Nouveau vecteur dynamique (avec nouveau nb d'éléments):        " << adr.get() << endl ;
                for (int i=0; i<nbelem; i++) adr[i] = v.adr[i] ;
            }
            else cout << "On ne fait rien car il s'agit du même objet." << endl ;
            return *this ; // fait appel au constructeur de recopie
        }
        vect operator = (vect &&v) // surdéfinition de l'opérateur d'affectation par déplacement
        {   cout << "Opérateur = de déplacenent sur   : " << this << " de l'objet vecteur en : " << &v << endl ;
            if (this!=&v)
            {   cout << "Avant affectation - déplacement de " << &v << " - tableau de nb en : " << v.adr.get() << endl ;
                cout << "                  - vers           " << this << " - tableau de nb en : " << adr.get() << endl ;
                nbelem = v.nbelem ;
                adr = move(v.adr) ;
                cout << "Après affectation - déplacement de " << &v << " - tableau de nb en : " << v.adr.get() << endl ;
                cout << "                  - vers           " << this << " - tableau de nb en : " << adr.get() << endl ;
            }
            else cout << "On ne fait rien car il s'agit du même objet." << endl ;
            return *this ; // fait appel au constructeur de recopie
        }
        ~vect() {cout << "Destr. objet en : " << this << " - tableau de nb en : " << adr.get() << endl ;}
} ;

vect fonction_bidon(vect v) // fonction qui appelle le constructeur de recopie
{   cout << "Fonction bidon..." << endl ;
    return v ;
}

int main()
{   vect a(5) ;
    cout << endl ;

    vect b(fonction_bidon(a)) ; // d'abord le constructeur de recopie est appelée, puis suivi du constructeur de déplacement car la fonction fourni une rvalue
    cout << endl ;

    a = b ;
    cout << endl ;

    a = move(a) ;
    cout << endl ;

    a = move(b) ;
    cout << endl ;
}
