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
int main()
{
    int nb_1, nb_2, nb_3, nb_4, nb_5 ;
    nb_1 = nb_2 = nb_3 = nb_4 = 0 ;
    point p_1(1, 2), p_2(3, 4), p_3(5, 6), p_4(7, 8) ;
    // conversion explicites
    nb_1 = (int) p_1 ;
    nb_2 = static_cast<int> (p_2) ;
    nb_3 = int(p_3) ; 
    // conversion implicite > serait refusée à la compilation si fonction était définie avec "explicit"
    nb_4 = p_4 ;
    nb_5 = 1 + p_1 + p_4 ;
    cout << "Résultat des conversions : \n"
         << "nb_1 = (int) p_1              : " << nb_1 << "\n"
         << "nb_2 = static_cast<int> (p_2) : " << nb_2 << "\n"
         << "nb_3 = int(p_3)               : " << nb_3 << "\n"
         << "nb_4 = p_4                    : " << nb_4 << "\n"
         << "nb_5 = 1 + p_1 + p_4          : " << nb_5 << endl ;
}