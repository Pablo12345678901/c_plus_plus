#include <iostream>
using namespace std;

class point
{
    public :
        point() ; // constructeur sans argument
        point(string message) ; // constructeur
        point(int, int) ; // constructeur
        void deplace(int, int) ;
        void affiche() ;
        void affiche(string message) ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;
void f_sur_point(point *adr) ; // prototype

int main()
{
    point point_1(5, 2) ; // avec coordonnées complète
    point_1.affiche() ;
    point point_2 ; // sans coordonnées
    point_2.affiche() ;
    point point_3("WTF !") ; // avec message
    point_3.deplace(1, 4) ;
    point_3.affiche("Joder !") ; // surdéfinition de affiche avec un string
}

// Fonctions membres de la class "point"
point::point() : x(0), y(0) {cout << "Création de l'objet avec 0 comme coordonnées par défaut." << endl ;}
point::point(string message) : x(0), y(0) {cout << message << endl ; cout << "Création de l'objet avec 0 comme coordonnées par défaut." << endl ;}
point::point(int abs, int ord)
{   x = abs ; y = ord ;
    cout << "Création de l'objet en x : " << x << " et y : " << y << endl ;
}
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ;
}
void point::affiche()
{ cout << "Je suis en x : " << x << " et y : " << y << endl ;
}
void point::affiche(string message)
{ cout << message << endl ; affiche() ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
