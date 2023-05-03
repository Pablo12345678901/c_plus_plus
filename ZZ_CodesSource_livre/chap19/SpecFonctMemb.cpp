// SpecFonctMemb
#include <iostream>
using namespace std ;
  // creation d’un patron de classe
template <typename T> class point
{ public :
   point (T abs=0, T ord=0) : x(abs), y(ord) { }
   void affiche () const ;
  private :
   T x ; T y ;
} ;
  // definition de la fonction affiche
template <typename T> void point<T>::affiche () const
{  cout << "Coordonnees : " << x << " " << y << "\n" ; }
  // ajout d’une fonction affiche spécialisee pour les caracterest
template <> void point<char>::affiche () const
{  cout << "Coordonnees : " << (int)x << " " << (int)y << "\n" ; }
int main ()
{  point <int> ai (3, 5) ;        ai.affiche () ;
   point <char> ac ('d', 'y') ;   ac.affiche () ;
   point <double> ad (3.5, 2.3) ; ad.affiche () ;
}