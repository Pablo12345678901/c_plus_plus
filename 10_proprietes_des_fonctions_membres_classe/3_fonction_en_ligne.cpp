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
void f_sur_point(point *adr) ; // prototype

int main()
{
    point point_1(5, 2) ; // avec coordonnées complète
    point_1.affiche("Position de départ : ") ;
    point_1.deplace(5, 1) ;
    point_1.affiche("Après déplacement : ") ;
    point point_2 ; // sans coordonnées, par défaut, cordonnées 0,0
    point_2.affiche() ; // par défaut message nul
}

// Fonctions membres de la class "point"
inline void point::deplace(int dx, int dy) { x+=dx ; y+=dy ; cout << "Déplacement de l'objet en x : " << x << " et y : " << y << endl ; }
// ci-dessus : fonction en ligne
void point::affiche(string message)
{ cout << message << "Je suis en x : " << x << " et y : " << y << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
