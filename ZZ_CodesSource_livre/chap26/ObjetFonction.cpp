// ObjetFonction
#include <iostream>
using namespace std ;
class cl_fonc             /* definition d’une classe fonction */
{   int coef ;
  public :
    cl_fonc(int n) : coef(n) { }
    int operator () (int p) {return coef*p ; }
} ;
int fct (int n)           /* definition d’une fonction usuelle */
{ return 5*n ; }
template <class T>void essai (T f)    // definition de essai qui reçoit en   
{ cout << "f(1) : " << f(1) << endl ; // argument un objet de type quelconque
  cout << "f(4) : " << f(4) << endl ; // et qui l’utilise comme une fonction 
}
int main()
{ essai (fct) ;        // appel essai, avec une fonction de rappel usuelle
  essai (cl_fonc(3)) ; // appel essai, avec une fonction de rappel objet
  essai (cl_fonc(7)) ; // idem
  essai ([] (int n) { return 5*n*n + 5 ;}) ;  // C++11 : appel essai avec lambda
}