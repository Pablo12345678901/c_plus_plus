#include <iostream>
using namespace std ;

template <typename T> class point
{
    public :
        point(T abs=0, T ord=0) : x(abs), y(ord) {cout << "Construction du point en : " << x << " " << y << endl ;}
        void affiche() const; // sur objet constant - pas de modification prévue dans cette fonction
    private :
        T x, y ;
} ;
int main()
{   int nb_1 = 10, nb_2 = 20 ;
    float nb_3 = 1.111, nb_4 = 2.222 ;

    point p_int(nb_1, nb_2) ;
    p_int.affiche() ;

    point p_float(nb_3, nb_4) ;
    p_float.affiche() ;

    point<int> p_int_sans_arg ;
    p_int_sans_arg.affiche() ;

    point<double> p_double_sans_arg ;
    p_double_sans_arg.affiche() ;
}

template <typename T> void point<T>::affiche() const
{cout << "Point en : " << x << " " << y << endl ;
} 