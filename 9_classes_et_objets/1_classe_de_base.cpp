#include <iostream>
using namespace std;

class point
{
    public :
        void initialise(int, int) ;
        void deplace(int, int) ;
        void affiche() ;
    private :
        int x ;
        int y ;
} ;

int main()
{
    point point_a, point_b ;
    point_a.initialise(5, 2) ;
    point_a.affiche() ;
    point_a.deplace(-5, -2) ;
    point_a.affiche() ;
}

// Fonctions membres de la class "point"
void point::initialise(int abs, int ord)
{ x = abs ; y = ord ; }

void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ; }

void point::affiche()
{ cout << "Je suis en x : " << x << " et y : " << y << endl ; }