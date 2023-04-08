#include <iostream>
using namespace std;

class point
{
    public :
        point(int abs = 0, int ord = 0) : x(abs), y(ord) { cout << "Création de l'objet en x : " << x << " et y : " << y << endl ; } ; // constructeur - fonction en ligne
        void affiche(string message = "") ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;

int main()
{
    point point_1(5, 2) ; // avec coordonnées complète
    point_1.affiche("Nouvelle fonction affiche : ") ;
    point point_2 ; // avec coordonnées complète
    point_2.affiche() ;
}

// Fonctions membres de la class "point"
void point::affiche(string message)
{ cout << message << "Adresse : " << this << " et je suis en x : " << x << " et y : " << y << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
