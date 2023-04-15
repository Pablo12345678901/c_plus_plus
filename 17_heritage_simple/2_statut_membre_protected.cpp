#include <iostream>
using namespace std ;

class point_1_cor
{
    public :
        point_1_cor(int abs=0) : x(abs) {cout << "Construction d'un point_1_cor en x : " << x << endl ;}
        void affiche() {cout << "Le point_1_cor se situe en x : " << x << endl ;}
        ~point_1_cor() {cout << "Destruction d'un point_1_cor en x : " << x << endl ;}
    private :
        // rien
    protected :
        int x ;
} ;
class point_2_cor : public point_1_cor
{
    public :
        point_2_cor(int abs=0, int ord=0) : point_1_cor(abs), y(ord) {cout << "Construction d'un point_2_cor en x y : " << x << " " << y << endl ;}
        void affiche() {cout << "Le point_2_cor se situe en x y : " << x << " " << y << endl ;}
        void modif() { x = 500 ; cout << "Modification\n" ; affiche() ;}
        ~point_2_cor() {cout << "Destruction d'un point_2_cor en x y : " << x << " " << y << endl ;}
    private :
    int y ;
} ;

int main()
{   point_1_cor p1c(29) ;
    p1c.affiche() ;
    point_2_cor p2c(10, 100) ;
    p2c.affiche() ;
    p2c.point_1_cor::affiche() ;
    //p2c.x = 500 ; // bug car pas possible d'accéder à un membre protected depuis dehors de la class 
    // accessible que depuis ses fonctions membres - ou fonctions membres de la mère
    p2c.affiche() ;
    p2c.modif() ;
}