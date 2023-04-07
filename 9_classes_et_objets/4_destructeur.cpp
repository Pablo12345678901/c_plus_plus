#include <iostream>

class point
{
    public :
        point(int, int) ; // constructeur
        ~point() ; // destructeur
        void deplace(int, int) ;
        void affiche() ;
    private :
        int x = 100 ; // initialisation par défaut
        int y = 200 ;
} ;

int main()
{
    {
        point point_a(23, 45) ; // création de l'objet
        point_a.affiche() ;
        point_a.deplace(-5, -2) ;
        point_a.affiche() ;
    }
    {
        point point_b(10, 9) ; // création de l'objet
        point_b.affiche() ;
        point_b.deplace(1, -200) ;
        point_b.affiche() ;
    }
}

// Fonctions membres de la class "point"
point::point(int abs, int ord) : x(abs), y(ord) {std::cout << "Création de l'objet en x : " << x << " et y : " << y << std::endl ;}
/* équivalent à :
point::point(int abs, int ord)
{ x = abs ; y = ord ;
std::cout << "Création de l'objet en x : " << x << " et y : " << y << std::endl ;
}
*/
point::~point()
{ std::cout << "L'objet situé en x : " << x << " et y : " << y << " a été détruit." << std::endl ;
}
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ;
}
void point::affiche()
{ std::cout << "Je suis en x : " << x << " et y : " << y << std::endl ;
}