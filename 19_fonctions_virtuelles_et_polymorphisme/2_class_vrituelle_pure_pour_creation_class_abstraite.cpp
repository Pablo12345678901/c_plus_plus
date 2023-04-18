#include <iostream>
using namespace std ;

class forme // Il est impossible de créer un objet d'une class virtuelle pure du moment où au moins une de ses fonction est virtuelle pure (voir ci-dessous)
{   public :
        forme() {cout << "Création d'une forme." << endl ; } // pour prouver que la création indirecte peut se faire.
        void virtual affiche() = 0 ; // fonction virtuelle pure
} ;
class carre : public forme
{   public :
        carre() {cout << "Création d'un carré." << endl ;}
        void virtual affiche() {cout << "Ceci est un carré." << endl ;} // redéfinition de la fonction virtuelle affiche
} ;

int main()
{
    //forme f ; // bug à la compilation car impossible de créer un objet d'une class virtuelle pure = correct !
    carre c ;
}