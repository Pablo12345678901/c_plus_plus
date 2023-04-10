#include <iostream>
#include <vector>
using namespace std;

class point
{
    public :
        point(int abs, int ord=0) : x(abs), y(abs) {cout << "Crée un point en x y : " << x << " " << y << endl ;}
        point(point &p) : x(p.x), y(p.y) {cout << "Copie : Crée un point en x y : " << x << " " << y << endl ;}
        //point() = default ;
    private :
        int x ;
        int y ;
} ;

int main()
{
   point liste_point [3] = { {1}, {2}, {3, 3}} ;
   point p1(100, 100) ;
   point liste_point_2[2] = {p1, p1} ;
}
