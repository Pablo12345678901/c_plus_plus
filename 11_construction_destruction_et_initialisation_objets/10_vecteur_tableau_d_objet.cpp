#include <iostream>
#include <vector>
using namespace std ;
#include <iostream>
using namespace std;

class point
{
    public :
        void initialise(int abs=0, int ord=0) ;
        void deplace(int, int) ;
        void affiche() ;
    private :
        int x ;
        int y ;
} ;

int main()
{
    point point_a, point_b, point_c ;
    vector <point> liste_points (3) ;
    liste_points[0] = point_a ; liste_points[1] = point_b ; liste_points[2] = point_c ;
    for (auto p : liste_points) {p.initialise() ; p.affiche() ; p.deplace(2, 2) ; p.affiche() ; cout << endl ;}
}

// Fonctions membres de la class "point"
void point::initialise(int abs, int ord)
{   static int val_x = 0 ;
    static int val_y = 0 ;
    x = abs+val_x ; y = ord+val_y ;
    val_x += 5 ; val_y +=10 ;
    cout << "Création..." << endl ;
}
void point::deplace(int dx, int dy)
{ cout << "Déplacement..." << endl ; x+=dx ; y+=dy ; }

void point::affiche()
{ cout << "Je suis en x : " << x << " et y : " << y << endl ; }

