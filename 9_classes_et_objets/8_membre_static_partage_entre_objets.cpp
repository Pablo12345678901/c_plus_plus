#include <iostream>
using namespace std;

class compteur
{
    public :
        compteur() ; // constructeur
        ~compteur() ; // destructeur
    private :
        static int compt ;
        int num ;
} ;
int compteur::compt = 0 ; // initialisation de la var static commune aux objets
int main()
{
    {
    compteur a ;
    compteur b ;
    }
    compteur c, d, e ;
}
// méthode de class
compteur::compteur()
{
    num = ++compt ;
    cout << "Création de l'objet numéro : " << num << "... Il y a désormais : " << compt << " objet(s)." << endl ;
}
compteur::~compteur()
{
    cout << "Destruction de l'objet numéro : " << num << "... Il y a désormais : " << --compt << " objet(s)." << endl ;
}
