// PatronClasses
#include <iostream>
using namespace std ;
template <typename T> class point
{ public :
    point (T abs=0, T ord=0) : x(abs), y(ord) { }
    void affiche () const ;
  private :
    T x ; T y ;
} ;
template <typename T> void point<T>::affiche () const
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}
int main ()
{ point <int> ai (3, 5) ;        ai.affiche () ;
  point <char> ac ('d', 'y') ;   ac.affiche () ;
  point <double> ad (3.5, 2.3) ; ad.affiche () ;
}