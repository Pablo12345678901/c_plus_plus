#include <iostream>
using namespace std ;

class point
{   public :
        point(int abs, int ord) : x(abs), y(ord) {cout << "Constr. point x y " << x << " " << y << endl ;}
        point() : x(0), y(0) {cout << "Constr. par défaut point x y " << x << " " << y << endl ;}
        void affiche() const { cout << "Coordonnées x y : " << x << " " << y << endl ;}
    private :
        int x, y ;
} ;
class coul
{   public :
        coul(short c) : couleur(c) { cout << "Constr. couleur : " << couleur << endl ;}
        void affiche() const {cout << "La couleur est : " << couleur << endl ;}
    private :
        short couleur ;
} ;
class masse
{   public :
        masse(int m) : mas(m) {cout << "Constr. masse : " << mas << endl ; }
        void affiche() const {cout << "La masse vaut : " << mas << endl ; }
    private :
        int mas ;
} ;
class pointcoul : public virtual point, public coul
{   public :
        pointcoul(int abs, int ord, short c) : coul(c) // pas d'info pour point car dérivation virtuelle
        {cout << "Constr. pointcoul en x y : " << abs << " " << ord << " de couleur : " << c << endl ;}
        void affiche() const {cout << "Pointcoul affiche : " ; point::affiche(); coul::affiche(); }
    private :
        // rien
} ;
class pointmasse : public virtual point, public masse
{   public :
        pointmasse(int abs, int ord, int m) : masse(m) // pas d'info pour point car dérivation virtuelle
        {cout << "Constr. pointmasse en x y : " << abs << " " << ord << " de masse : " << m << endl ;}
        void affiche() const {cout << "Pointmasse affiche : " ; point::affiche(); masse::affiche(); }
    private :
        // rien

} ;
class pointcoulmasse : public pointcoul, public pointmasse
{   public :
        pointcoulmasse(int abs, int ord, short c, int m) : point(abs, ord), pointcoul(abs, ord, c), pointmasse(abs, ord, m)
        {cout << "Constr. pointcoulmasse en x y : " << abs << " " << ord << " de couleur : " << c << " et de masse : " << m << endl ;}
        void affiche() const {cout << "Pointcoulmasse affiche : " ; point::affiche(); coul::affiche(); masse::affiche(); }
    private :
        // rien
} ;

int main()
{
    pointcoul p(3, 9, 2) ;
    cout << endl ;

    p.affiche() ;
    cout << endl ;

    pointmasse pm(12, 25, 100) ;
    cout << endl ;

    pm.affiche() ;
    cout << endl ;

    pointcoulmasse pcm(2, 5, 10, 20) ;
    cout << endl ;

    pcm.affiche() ;
    cout << endl ;

    return 0 ;
}