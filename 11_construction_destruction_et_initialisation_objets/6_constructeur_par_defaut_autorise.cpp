#include <iostream>
using namespace std;

class point
{
    private :
        int x, y ;
    public :
        point(int nb_x, int nb_y) : x(nb_x), y(nb_y) {cout << "Constructeur de base." << endl ;} ;
        explicit point(int nb) : x(nb), y(nb) {cout << "Constructeur à un argument" << endl ;}
        point() = default ; // constructeur par défaut > sera appelé si pas d'argument
        ~point() {cout << "Destruction de l'objet à l'adresse : " << this << endl ;}
} ;

int main()
{
    point p1(1, 2) ;
    cout << "Appel du constructeur par défaut." << endl ;
    point p2 ; // fait appel au constructeur par défaut
    point p3 (4)  ; // accepté car conversion explicit
    point p4 {4} ; // accepté car conversion explicit
    //point p3 = (4) ; // refusé car conversion implicite (voir le explicit ci-dessus qui l'interdit)
    //point p4 = {4} ; // refusé car conversion implicite (voir le explicit ci-dessus qui l'interdit)
}
