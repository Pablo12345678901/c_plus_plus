#include <iostream>
using namespace std;

class point
{
    public :
        point(int abs = 0, int ord = 0) : x(abs), y(ord) { cout << "Création de l'objet en x : " << x << " et y : " << y << endl ; } ; // constructeur - fonction en ligne
        inline void deplace(int dx, int dy) ;
        void affiche(string message = "") ;
        bool coincide(point pt) ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;

int main()
{
    point point_1(5, 2) ; // avec coordonnées complète
    point_1.affiche("Position de départ : ") ;
    point_1.deplace(5, 1) ;
    point_1.affiche("Après déplacement : ") ;
    point point_2 ; // sans coordonnées, par défaut, cordonnées 0,0
    point_2.affiche() ; // par défaut message nul
    while (!point_1.coincide(point_2))
    {
        point_1.affiche("Point 1 : ") ; point_2.affiche("Point 2 : ") ;
        int dx = 0, dy = 0;
        cout << "Quel déplacement appliquer au point 1 : (x puis y) ? " << endl ;
        cout << "Donner un nombre positif pour un déplacement de +1, négatif pour -1 et nul sinon." << endl ;
        cout << "Déplacement : " ;
        cin >> dx >> dy ;
        if (dx>0) dx = 1 ; else if (dx<0) dx = -1 ; else dx = 0 ;
        if (dy>0) dy = 1 ; else if (dy<0) dy = -1 ; else dy = 0 ;
        point_1.deplace(dx, dy) ;
    }
    cout << "Bravo, vous avez fait coïncider les 2 points ! " << endl ;
}

// Fonctions membres de la class "point"
inline void point::deplace(int dx, int dy) { x+=dx ; y+=dy ; cout << "Déplacement de l'objet en x : " << x << " et y : " << y << endl ; }
// ci-dessus : fonction en ligne
void point::affiche(string message)
{ cout << message << "Je suis en x : " << x << " et y : " << y << endl ;
}
bool point::coincide(point pt)
{ return (pt.x == x) && (pt.y == y) ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
