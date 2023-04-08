// s'applique que à un objet constant
// et ne peut donc par définition par en modifier les valeurs des membres 
#include <iostream>
using namespace std;

class point
{
    public :
        point(int abs = 0, int ord = 0) : x(abs), y(ord) { cout << "Création de l'objet en x : " << x << " et y : " << y << endl ; } ; // constructeur - fonction en ligne
        void affiche(string message = "") ;
        void affiche(string message = "") const ;
        void deplace(int dx=0, int dy=0) ;
        void deplace(int dx=0, int dy=0) const ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;

int main()
{
    point point_1(5, 2) ; // avec coordonnées complète
    point_1.affiche() ;
    point_1.deplace(10, 20) ;
    const point point_2(24, 35) ; // avec coordonnées complète
    point_2.affiche() ;
    point_2.deplace(10, 20) ;
}

// Fonctions membres de la class "point"
void point::affiche(string message)
{ cout << message << "Adresse : " << this << " et je suis en x : " << x << " et y : " << y << endl ;
}
void point::affiche(string message) const
{ cout << message << "OBJET CONSTANT : Adresse : " << this << " et je suis en x : " << x << " et y : " << y << endl ;
}
void point::deplace(int dx, int dy)
{ x+=dy ; y+=dy ; cout << "Déplacement : je suis en x : " << x << " et y : " << y << endl ;
}
void point::deplace(int dx, int dy) const
{ cout << "OBJET CONSTANT : Déplacement refusé" << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
