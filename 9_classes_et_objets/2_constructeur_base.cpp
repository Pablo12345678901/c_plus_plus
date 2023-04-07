#include <iostream>

class point
{
    public :
        point(int, int) ; // constructeur
        void deplace(int, int) ;
        void affiche() ;
    private :
        int x ;
        int y ;
} ;

int main()
{
    point point_a(5, 2), point_b(10, 9) ;
    point_a.affiche() ;
    point_a.deplace(-5, -2) ;
    point_a.affiche() ;
}

// Fonctions membres de la class "point"
point::point(int abs, int ord)
{ x = abs ; y = ord ;
std::cout << "Création de l'objet en x : " << x << " et y : " << y << std::endl ;
}
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ;
}
void point::affiche()
{ std::cout << "Je suis en x : " << x << " et y : " << y << std::endl ;
}