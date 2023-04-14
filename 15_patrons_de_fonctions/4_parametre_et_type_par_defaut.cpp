#include <iostream>
using namespace std ;

class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Création du point en x y : " << x << " " << y << endl ;} // constructeur
        point(const point &p) : x(p.x), y(p.y) {cout << "Copie du point en x y : " << x << " " << y << endl ;} // constructeur de recopie
        operator int() {cout << "Appel du convertisseur de point en int" << endl ; return x ;} // conversion explicit et implicit autorisée
        // explicit operator int() {return x ;} // avec cette ligne à la place de celle ci-dessus, uniquement conversion explicit autorisée
        void affiche() {cout << "Point en x y " << x << " " << y << endl ; }
        ~point() {cout << "Destruction du point en x y : " << x << " " << y << endl ;}
    private :
    int x, y ;

} ;

// patron de fonction
template <typename T = point> void f(T par1 = 0) // type par défaut = point, valeur par défaut = 0
{   T val(par1) ;
}

int main()
{
    int nb = 5 ;
    f(nb) ; // T = int / par1 = 5 > crée un int
    f() ; // T = point (par défaut), par1 = 0 (par défaut) > crée (et copie) un point
}
