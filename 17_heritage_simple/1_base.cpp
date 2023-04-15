#include <iostream>
using namespace std ;

class point_1_cor
{
    public :
        point_1_cor(int abs=0) : x(abs) {cout << "Construction d'un point_1_cor en x : " << x << endl ;}
        void affiche() {cout << "Le point_1_cor se situe en x : " << x << endl ;}
        ~point_1_cor() {cout << "Destruction d'un point_1_cor en x : " << x << endl ;}
    private :
    int x ;
} ;
class point_2_cor : public point_1_cor
{
    public :
        point_2_cor(int abs=0, int ord=0) : point_1_cor(abs), x(abs), y(ord) {cout << "Construction d'un point_2_cor en x y : " << x << " " << y << endl ;}
        void affiche() {cout << "Le point_2_cor se situe en x y : " << x << " " << y << endl ;}
        ~point_2_cor() {cout << "Destruction d'un point_2_cor en x y : " << x << " " << y << endl ;}
    private :
    int x, y ;
} ;

int main()
{   point_1_cor p1c(29) ;
    p1c.affiche() ;
    point_2_cor p2c(10, 100) ;
    p2c.affiche() ;
    p2c.point_1_cor::affiche() ;
}