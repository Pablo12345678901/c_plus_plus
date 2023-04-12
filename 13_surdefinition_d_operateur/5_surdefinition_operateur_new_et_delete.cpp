#include <iostream>
#include <cstddef>
#include <memory>
using namespace std;

// ce code génère un warning que je peux ignorer car cela fonctionne
// pour plus d'info voir ici : https://stackoverflow.com/questions/941832/is-it-safe-to-delete-a-void-pointer

class point
{   
    public :
        point(int abs=0, int ord=0) : x(abs), y(ord) // constructeur
        {   npt++ ; cout << "++ Création    " << x << " " << y << " - " << npt_dyn
                         << " points dyn" << " sur un total de " << npt << endl ;
        }
        ~point() // destructeur
        {   npt-- ; cout << "-- Destruction " << x << " " << y << " - " << npt_dyn
                         << " points dyn" << " sur un total de " << npt << endl ;
        }
        void * operator new (size_t sz) // retourne un ptr void, je dois fournir en paramètres une taille de sz octet
        {   npt_dyn++ ;
            cout << "++ Allocation dynamique - il y a " << npt_dyn
                 << " points dyn" << endl ;
            return ::new char[sz] ; // appel de l'opérateur général après avoir effectué les étapes que je souhaite
        }
        void operator delete(void * dp) noexcept
        {   npt_dyn-- ;
            cout << "-- Destruction dynamique - il reste " << npt_dyn
                 << " points dyn" << endl ;
            return ::delete(dp) ; // appel de l'opérateur général après avoir effectué les étapes que je souhaite
            // ce return génère un warning que je peux ignorer car cela fonction
        }
    private :
        static int npt ; // nb total de point
        static int npt_dyn ; // nb total de points dynamiques
        int x, y ;
} ;
int point::npt = 0 ; // initialisation de la var static
int point::npt_dyn = 0 ;  // initialisation de la var static
int main()
{
    point * ad1, *ad2 ;
    point a(1, 5) ;
    ad1 = new point(2, 3) ; // création pt dynamique
    point b ;
    ad2 = new point(3, 0) ; // création pt dynamique
    delete ad1 ;
    point c(2) ;
    delete ad2 ;
    auto up = make_unique<point>(4, 9) ; // création d'un unique_ptr assigné à un point dynamique
}
