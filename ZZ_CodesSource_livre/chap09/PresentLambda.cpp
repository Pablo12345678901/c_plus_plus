// PresentLambda
#include <iostream>
using namespace std;
void affiche (double(*f)(double), double debut, double fin, int nb)
{ if (nb<2) nb = 2 ;   // par securite
  double x = debut ;
  double pas = (fin-debut)/(nb-1) ;
  for (int i=0 ; i<nb ; i++)
  { cout << (*f) (x) << " " ;   // appel fonction reçue en premier argument pour x
    x = x + pas ;
  }
  cout << endl ;
}
int main()
{ affiche ( [] (double x) {return x * x ; }, 0., 1., 5) ;
    // depuis C++14, on peut utiliser :
  affiche ( [] (double x) { double y = 3*x*x - 3*x -2 ;     
                            if (y<0) y = -y+2 ;
                            return y ; 
                          }, 0., 2., 6 ) ;
    // Avec C++11, il fallait obligatoirement utiliser :
  affiche ( [] (double x) -> double { double y = 3*x*x - 3*x -2 ;
                                      if (y<0) y = -y+2 ;
                                      return y ;
                                    }, 0., 2., 6 ) ;
}