#include <iostream>
using namespace std ;

class point_1_cor
{
    public :
        point_1_cor(int abs=0) : x(abs) {cout << "Construction d'un point_1_cor en x : " << x << endl ;}
        point_1_cor(point_1_cor &p1c) { x=p1c.x ; cout << "Recopie du point_1_cor en x : " << x << endl ;}
        void affiche() {cout << "Le point_1_cor se situe en x : " << x << endl ;}
        ~point_1_cor() {cout << "Destruction d'un point_1_cor en x : " << x << endl ;}
    private :
    int x ;
} ;
class point_2_cor : public point_1_cor
{
    public :
        point_2_cor(int abs=0, int ord=0) : point_1_cor(abs), x(abs), y(ord) {cout << "Construction d'un point_2_cor en x y : " << x << " " << y << endl ;}
        point_2_cor(point_2_cor &p2c) : point_1_cor(p2c) { x=p2c.x ; y = p2c.y ; cout << "Recopie du point_2_cor en x : " << x << " " << y << endl ;}
        void affiche() {cout << "Le point_2_cor se situe en x y : " << x << " " << y << endl ;}
        ~point_2_cor() {cout << "Destruction d'un point_2_cor en x y : " << x << " " << y << endl ;}
    private :
    int x, y ;
} ;

void fonction(point_2_cor) ; // prototype
int main()
{   point_2_cor p2c(1, 2) ;
    fonction(p2c) ;
}
// fonction bidon
void fonction(point_2_cor)
{   cout << "Fonction... Ne fait rien" << endl ;
}