// FonctionEnLigne
#include <cmath>         // pour sqrt
#include <iostream>
using namespace std ;
    /*******  declaration definition d’une fonction en ligne ********/
inline double norme (double vec[3])
{  double s = 0 ;
   for (int i=0 ; i<3 ; i++)  s+= vec[i] * vec[i] ;
   return sqrt(s) ;
}
    /******* exemple d’utilisation d’une fonction en ligne *********/
int main ()   
{  double v1[3], v2[3] ;
   for (int i=0 ; i<3 ; i++)
   { v1[i] = i ; v2[i] = 2*i-1 ; }
   cout << "norme de v1 : " << norme(v1) << endl ;
   cout << "norme de v2 : " << norme(v2) << endl ;
}