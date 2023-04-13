#include <iostream>
using namespace std ;

class point ;
class complex
{
    public :
        complex(double val=0) : reel(val), img(0) {cout << "Constructeur avec conversion double en complex... Valeur : " << reel << " + " << img << "i" << endl ; }
        complex(const point &p) ;
        void affiche() {cout << "Le nombre complexe vaut : " << reel << " + " << img << " i" << endl ; }
        ~complex() {cout << "Destruction du nb complex de valeur : " << reel << " + " << img << "i" << endl ;}
        double reel, img ; // je mets les membres en public pour pouvoir modifier la partie imaginaire via la fonction main
    private :
        // rien
} ;
class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Création du point en x y : " << x << " " << y << endl ;} // constructeur
        point(const point &p) : x(p.x), y(p.y) {cout << "Copie du point en x y : " << x << " " << y << endl ;} // constructeur de recopie
        void affiche() {cout << "Point en x y " << x << " " << y << endl ; }
        ~point() {cout << "Destruction du point en x y : " << x << " " << y << endl ;}
        friend complex::complex(const point &p)  ; // fonction amie 
    private :
        int x, y ;

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

// constructeur de la class complex sur base d'une class point
complex::complex(const point &p) 
{   reel =p.x ; img = p.y ;
    cout << "Constructeur avec conversion point en complex... Valeur : " << reel << " + " << img << "i" << endl ; 
}
