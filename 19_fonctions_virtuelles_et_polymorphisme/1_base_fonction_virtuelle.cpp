#include <iostream>
using namespace std ;

class point
{   public :
        point(int abs, int ord) : x(abs), y(ord) {cout << "Constr. point x y " << x << " " << y << endl ;}
        void virtual affiche() const { cout << "Coordonnées x y : " << x << " " << y << endl ;}
    protected :
        int x, y ;
} ;

class pointcoul : public point
{   public :
        pointcoul(int abs, int ord, short c) : point(abs, ord), coul(c)
        {cout << "Constr. pointcoul en x y : " << x << " " << y << " de couleur : " << coul << endl ;}
        void affiche() const {cout << "Pointcoul : " ; point::affiche(); cout << "de couleur : " << coul << endl ; }
    private :
        short coul ;
} ;

int main()
{
    point p(1, 2) ;
    pointcoul pc(3, 9, 2) ;
    point * adp ;
    pointcoul * adpc ;
    adp = &p ;
    adpc = &pc ;
    cout << endl ;
    adp->affiche();
    adpc->affiche() ;
    cout << endl ;
    adp = adpc ;
    adp->affiche();
    adpc->affiche() ;
    cout << endl ;
    return 0 ;
}