#include <iostream>
using namespace std ;

class point
{
    public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {} // constructeur
        void deplace(int dx=0, int dy=0) ;
        void affiche() ;
        friend bool coincide( const point &p1, const point &p2) ; 
    private :
        int x ;
        int y ;
} ;

int main()
{
    point point_a(5, 2), point_b(10, 9) ;
    point_a.affiche() ;
    point_b.affiche() ;
    if (coincide(point_a, point_b)) cout << "Les 2 points coïncident : VRAI" << endl ;
    else cout << "Les 2 points coïncident : FAUX" << endl ;
    point_a.deplace(5, -1) ;
    point_a.affiche() ;
    point_b.affiche() ;
    if (coincide(point_a, point_b)) cout << "Les 2 points coïncident : VRAI" << endl ;
    else cout << "Les 2 points coïncident : FAUX" << endl ;
    point_a.deplace(0, 8) ;
    point_a.affiche() ;
    point_b.affiche() ;
    if (coincide(point_a, point_b)) cout << "Les 2 points coïncident : VRAI" << endl ;
    else cout << "Les 2 points coïncident : FAUX" << endl ;
}

// Fonctions membres de la class "point"
void point::deplace(int dx, int dy)
{ cout << "Déplacement..." << endl ; x+=dx ; y+=dy ;
}
void point::affiche()
{ cout << "Adresse : " << this << " x y : " << x << " " << y << endl ;
}
//Fonction amie
bool coincide(const point &p1, const point &p2)
{ return (p1.x == p2.x) && (p1.y == p2.y) ; }

