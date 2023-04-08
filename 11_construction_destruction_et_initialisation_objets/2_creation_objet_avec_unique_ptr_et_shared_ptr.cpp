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

int main()
{
    // unique_ptr avec new point
    unique_ptr<point> uni_ptr_1 (new point(10, 4)) ; // création d'un pointeur et de l'espace nécessaire pour un objet de class point
    uni_ptr_1->affiche("Position de départ : ") ;
    (*uni_ptr_1).deplace(2, 3) ; // OU : adr->deplace(5, 1) ;
    uni_ptr_1->affiche("Après déplacement : ") ;
    // unique_ptr avec make_unique
    unique_ptr<point> uni_ptr_2 (make_unique<point>(1, 40)) ;
    uni_ptr_2->affiche("Position de départ : ") ;
    (*uni_ptr_2).deplace(2, 3) ;
    uni_ptr_2->affiche("Après déplacement : ") ;
    cout << "\nShared ptr\n" ;
    // shared_ptr avec new point / make_shared
    shared_ptr<point> shd_ptr_1 (new point(-1, -5)) ; // OU : shared_ptr<point> shd_ptr_1 (make_shared<point>(-0, -0)) ;
    shd_ptr_1->affiche("Position de départ : ") ;
    (*shd_ptr_1).deplace(2, 3) ;
    shd_ptr_1->affiche("Après déplacement : ") ;
    // shared_ptr avec copie
    shared_ptr<point> shd_ptr_2 = shd_ptr_1;
    shd_ptr_2->affiche("Position de départ : ") ;
    (*shd_ptr_2).deplace(20, 300) ;
    shd_ptr_2->affiche("Après déplacement : ") ;
}

// Fonctions membres de la class "point"
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ; cout << "Déplacement de l'objet en x : " << x << " et y : " << y << endl ;
}
void point::affiche(string message)
{ cout << message << "Adresse : " << this << " - Je suis en x : " << x << " et y : " << y << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}
