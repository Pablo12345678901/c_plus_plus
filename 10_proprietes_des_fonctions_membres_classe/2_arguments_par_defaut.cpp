#include <iostream>
using namespace std;

class point
{
    public :
        point(int abs = 0, int ord = 0) ; // constructeur
        void deplace(int dx, int dy) ;
        void affiche(string message = "") ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;
void f_sur_point(point *adr) ; // prototype

int main()
{
    point point_1(5, 2) ; // avec coordonnées complète
    point_1.affiche("Message : ") ;
    point point_2 ; // sans coordonnées, par défaut, cordonnées 0,0
    point_2.affiche() ;
    point point_3(10) ; // 1 coordonnée manquante, par défaut, = 0
    point_3.deplace(1, 4) ;
    point_3.affiche("Joder !") ; // surdéfinition de affiche avec un string
}

// Fonctions membres de la class "point"
point::point(int abs, int ord)
{   x = abs ; y = ord ;
    cout << "Création de l'objet en x : " << x << " et y : " << y << endl ;
}
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ; cout << "Déplacement de l'objet en x : " << x << " et y : " << y << endl ;
}
void point::affiche(string message)
{ cout << message << "Je suis en x : " << x << " et y : " << y << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
