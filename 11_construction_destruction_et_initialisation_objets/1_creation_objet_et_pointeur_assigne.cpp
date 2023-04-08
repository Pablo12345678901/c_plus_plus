#include <iostream>
using namespace std;

class point
{
    public :
        point(int abs = 0, int ord = 0) : x(abs), y(ord) { cout << "Création de l'objet en x : " << x << " et y : " << y << endl ; } ; // constructeur - fonction en ligne
        inline void deplace(int dx, int dy) ;
        void affiche(string message = "") ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;

int main()
{
    point *adr = new point(5, 2) ; // création d'un pointeur et de l'espace nécessaire pour un objet de class point
    //point point_1(5, 2) ; // avec coordonnées complète
    adr->affiche("Position de départ : ") ;
    (*adr).deplace(5, 1) ; // OU : adr->deplace(5, 1) ;
    adr->affiche("Après déplacement : ") ;
    cout << "Suppression de l'objet avec delete..." << endl ;
    delete adr ;
    adr = nullptr ;
    cout << "Mise à 0 du pointeur..." << endl ;
}

// Fonctions membres de la class "point"
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ; cout << "Déplacement de l'objet en x : " << x << " et y : " << y << endl ;
}
void point::affiche(string message)
{ cout << message << "Je suis en x : " << x << " et y : " << y << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
