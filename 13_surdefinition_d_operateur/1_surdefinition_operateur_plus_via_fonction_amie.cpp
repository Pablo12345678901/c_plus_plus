#include <iostream>
using namespace std ;
class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Création du point en x y : " << x << " " << y << endl ;} // constructeur
        point(const point &p) : x(p.x), y(p.y) {cout << "Copie du point en x y : " << x << " " << y << endl ;} // constructeur de recopie
        void affiche() {cout << "Point en x y " << x << " " << y << endl ; }
        friend point operator + (point p1, point p2) ;
        ~point() {cout << "Destruction du point en x y : " << x << " " << y << endl ;}
    private :
    int x, y ;

} ;
int main()
{
    point p1(10, 20), p2(5, 6) ;
    cout << endl ;
    p1.affiche() ;
    p2.affiche() ;
    cout << endl ;
    cout << "Avant fonction..." << endl ;
    cout << endl ;
    point p3 = p1 + p2 ;
    cout << endl ;
    cout << "Après fonction..." << endl ;
    cout << endl ;
    p1.affiche() ;
    p2.affiche() ;
    p3.affiche() ;
    cout << endl ;
    p3 = p1 + p2 + p3 ;
    p3.affiche() ;
    cout << endl ;
}
// surdefinition de l'operateur + avec "operator"
point operator + (point p1, point p2)
{   point somme_point ;
    somme_point.x = p1.x + p2.x ; somme_point.y = p1.y + p2.y ;
    return somme_point ;
}