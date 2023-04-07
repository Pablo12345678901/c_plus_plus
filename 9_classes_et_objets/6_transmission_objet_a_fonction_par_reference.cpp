#include <iostream>
using namespace std;

class point
{
    public :
        point(int, int) ; // constructeur
        void deplace(int, int) ;
        void affiche() ;
    private :
        int x, y ;
} ;
void f_sur_point(point &p) ; // prototype

int main()
{
    point point_a(5, 2) ;
    cout << "Hors fonction" << endl ;
    point_a.affiche() ;
    f_sur_point(point_a) ;
    cout << "Hors fonction" << endl ;
    point_a.affiche() ;
    
}

// Fonctions membres de la class "point"
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
// Fonction générale
void f_sur_point(point &p)
{
    cout << "Début fonction" << endl ;
    p.affiche() ;
    p.deplace(-1, -2) ;
    p.affiche() ;
    cout << "Fin fonction" << endl ;
}