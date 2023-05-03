//ExempleFonction
#include <iostream>
using namespace std ;
float fexple (float, int, int) ; // declaration de fonction fexple
        /***** le programme principal (fonction main) ******/
int main ()
{ float x = 1.5 ;
  int n = 3, p = 5, q = 10 ;
       /* appel de fexple avec les arguments x, n et p */
  float y = fexple (x, n, p) ;       // ou (C++11) : auto y = fexple (x, n, p) ;
  cout << "valeur de y : " << y << endl ;
       /* appel de fexple avec les arguments x+0.5, q et n-1 */
  float z = fexple (x+0.5, q, n-1) ; // ou (C++11) : auto z = fexple (x+0.5, q, n-1) ;
  cout << "valeur de z : " << z << endl ;
}
        /*************** la fonction fexple ****************/
float fexple (float x, int b, int c)
{ float val ;          // declaration d’une variable "locale" à fexple
  val = x * x + b * x + c ;
  return val ;
}