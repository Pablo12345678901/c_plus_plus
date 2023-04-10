#include <iostream>
using namespace std ;

// je ne comprends pas pourquoi le résultat du s3 donne 6 0

 class point
 {
    public :
        point(int abs=0, int ord=0) : x(abs), y(ord)
        {   cout << "Constructeur int int              " << x << " " << y << endl ; }
        point(initializer_list<int> c) : x(0), y(0) // valeur par défaut = 0, ignorée au delà de 2
        {   unsigned int nb = c.size() ;
            //DEBUG cout << "Size : " << c.size() << " and begin : " << c.begin() << endl ;
            auto deb = c.begin() ; x = (*deb) ;
            if (nb == 1) y = 0 ;
            else { deb++ ; y = (*deb) ; }
            cout << "Constructeur initializer_list (" << c.size() << ") " << x << " " << y << endl ;
            
        } 
    private :
        int x, y ;

 } ;
 int main()
 {
    int a = 10 ;
    initializer_list<int> babe {1, 2, 3, 4} ;
    //DEBUG cout << "Size : " << babe.size() << " and begin : " << babe.begin() << endl ;
    // initialisation directe
    point p1 ; point p2{} ;
    //point p3 ({}) ; //BUG à cause de mon compilateur - dépend de l'environnement
    point q1(1) ; point q2{2} ;
    point s1(1, 2) ; point s2{2, 4} ;
    // initialisation copie
    point p4 = {} ;
    point r3 = 3 ; point r4 = (4) ; point r5 = {5} ;
    point s3 = (3, 6) ; // déclenche un avertissement mais ne bug pas
    point s4 = {4, 8} ;
    cout << "Fin du programme " << endl ;
 }