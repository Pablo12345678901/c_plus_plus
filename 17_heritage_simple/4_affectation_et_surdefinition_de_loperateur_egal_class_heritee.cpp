#include <iostream>
using namespace std ;

class point
{
    public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Construction d'un point en x y : " << x << " " << y << endl ;}
        point(point &p1c) { x=p1c.x ; y=p1c.y ; cout << "Recopie du point en x y : " << x << " " << y << endl ;}
        point & operator = (const point &p1c) // surdéfinition opérateur =
        {   x = p1c.x ; y = p1c.y ; cout << "Affectation avec opérateur = d'un point en x y " << x << " " << y << endl ;
            return *this ;
        }
        void affiche() {cout << "Le point se situe en x y : " << x << " " << y << endl ;}
        ~point() {cout << "Destruction d'un point en x y : " << x << " " << y << endl ;}
    protected :
    int x, y ;
} ;
class point_couleur : public point
{
    public :
        point_couleur(int abs=0, int ord=0, string nom_coul="inconnue") : point(abs, ord), couleur(nom_coul)
        { cout << "Construction d'un point_couleur en x y : " << x << " " << y << " de couleur " << couleur << endl ;}
        point_couleur(point_couleur &p2c) : point(p2c)
        { x=p2c.x ; y = p2c.y ; couleur=p2c.couleur ; cout << "Recopie du point_couleur en x y : " << x << " " << y << " de couleur " << couleur << endl ;}
        point_couleur & operator = (const point_couleur &p2c) // surdéfinition opérateur =
        {   point * ad1 ;
            ad1 = this ; //  conversion p2c en p1c avec le pointeur p1c
            const point * ad2 ;
            ad2 = &p2c ; //  conversion p2c en p1c avec le pointeur p1c
            *ad1 = *ad2 ; // appel de l'opérateur d'affectation de p1c
            couleur = p2c.couleur ;
            cout << "Affectation avec opérateur = d'un point_couleur en x y : " << x << " " << y << " de couleur " << couleur << endl ;
            return *this ;
        }
        void affiche() {cout << "Le point_couleur se situe en x y : " << x << " " << y << " de couleur " << couleur << endl ;}
        ~point_couleur() {cout << "Destruction d'un point_couleur en x y : " << x << " " << y << " de couleur " << couleur << endl ;}
    private :
    string couleur ;
} ;

void fonction(point_couleur) ; // prototype
int main()
{   cout << endl ;
    point_couleur p2c_1(1, 2, "bleu") ;
    p2c_1.affiche() ;
    fonction(p2c_1) ;
    cout << endl ;
    point_couleur p2c_2(10, 20, "Noir") ;
    cout << endl ;
    cout << "p2c AVANT : " ;
    p2c_2.affiche() ;
    cout << endl ;
    p2c_2 = p2c_1 ; // affectation avec l'opérateur = de p2c qui appelle aussi l'opérateur d'affectation p2c
    cout << endl ;
    cout << "p2c APRES : " ;
    p2c_2.affiche() ;
    cout << endl ;
}
// fonction bidon
void fonction(point_couleur)
{   cout << "Fonction... Ne fait rien" << endl ;
}