#include <iostream>
using namespace std ;

// patron de fonction
template <typename T> T minimum (T nb_1, T nb_2)
{   return nb_1 < nb_2 ? nb_1 : nb_2 ;
}

class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Création du point en x y : " << x << " " << y << endl ;} // constructeur
        point(const point &p) : x(p.x), y(p.y) {cout << "Copie du point en x y : " << x << " " << y << endl ;} // constructeur de recopie
        friend int operator < (point p1, point p2) ; // surdéfinition de l'opérateur "<"
        void affiche() {cout << "Point en x y " << x << " " << y << endl ; }
        ~point() {cout << "Destruction du point en x y : " << x << " " << y << endl ;}
    private :
    int x, y ;

} ;
int main()
{
    point p1(10, 20), p2(9, 22) ;
    point p3 = min(p1, p2) ;
    cout << "min(p1, p2) : "  ;
    p3.affiche() ;  
}

// Surdéfinition de l'opérateur "<" pour la class
int operator < (point p1, point p2)
{   return p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y ; // retourne compare la norme des points a^2+b^2 < c^2+d^2
}