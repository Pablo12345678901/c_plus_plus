#include <iostream>
using namespace std ;

class complex ;
class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Création du point en x y : " << x << " " << y << endl ;} // constructeur
        point(const point &p) : x(p.x), y(p.y) {cout << "Copie du point en x y : " << x << " " << y << endl ;} // constructeur de recopie
        void affiche() {cout << "Point en x y " << x << " " << y << endl ; }
        operator complex() ;
        ~point() {cout << "Destruction du point en x y : " << x << " " << y << endl ;}
    private :
    int x, y ;

} ;
class complex
{
    public :
        complex(double val=0) : reel(val), img(0) {cout << "Constructeur avec conversion double en complex... Valeur : " << reel << " + " << img << "i" << endl ; }
        void affiche() {cout << "Le nombre complexe vaut : " << reel << " + " << img << " i" << endl ; }
        friend point::operator complex() ;
        ~complex() {cout << "Destruction du nb complex de valeur : " << reel << " + " << img << "i" << endl ;}
        double reel, img ; // je mets les membres en public pour pouvoir modifier la partie imaginaire via la fonction main
    private :
        // rien
} ;

int main()
{
    point p1(10, 20) ;
    p1.affiche() ;
    complex cpx(p1) ;
    cpx.affiche() ;
    cout << "Modification de la partie imaginaire du nb complexe..." << endl ;
    cpx.img+=150 ;
    cpx.affiche() ;
}
// conversion de la class point vers la class complex (cast)
point::operator complex()
{   complex pt_convert_en_cpx ;
    pt_convert_en_cpx.reel = x ; pt_convert_en_cpx.img = y ;
    return pt_convert_en_cpx ;
}