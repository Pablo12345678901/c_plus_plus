#include <iostream>
using namespace std ;
class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Création du point avec conversion int en x y : " << x << " " << y << endl ;} // constructeur depuis int
        point(double abs=0.0, double ord=0.0) : x(abs), y(ord) {cout << "Création du point avec conversion double en x y : " << x << " " << y << endl ;} // constructeur depuis double
        point(const point &p) : x(p.x), y(p.y) {cout << "Copie du point en x y : " << x << " " << y << endl ;} // constructeur de recopie
        operator int() {cout << "Appel du convertisseur de point en int" << endl ; return x ;} // conversion explicit et implicit autorisée
        // explicit operator int() {return x ;} // avec cette ligne à la place de celle ci-dessus, uniquement conversion explicit autorisée
        void affiche() {cout << "Point en x y " << x << " " << y << endl ; }
        ~point() {cout << "Destruction du point en x y : " << x << " " << y << endl ;}
    private :
    //int x, y ; // à utiliser si conversion int uniquement
    double x, y ; // à utiliser si conversion double (ou float) pour éviter une conversion dégradante (qui ne bugguerait pas au passage)

} ;
int main()
{
    int nb_1 = 1, nb_2 = 2, nb_3 = 3 ;
    double nb_4 = 5.3e4, nb_5 = 7.234, nb_6 = 8.101010 ;
    // conversion de int vers point à 1, 2 paramètres
    point p_1(nb_1), p_2(nb_2, nb_3) ;
    p_1.affiche() ;
    p_2.affiche() ;
    // conversion de double vers point à 1, 2 paramètres
    point p_3(nb_4), p_4(nb_5, nb_6) ; 
    p_3.affiche() ;
    p_4.affiche() ;
    // Ci-dessous : bug compilation car 2 constructeurs de base - fonction ambuigüe
    //point p_5 ;
}