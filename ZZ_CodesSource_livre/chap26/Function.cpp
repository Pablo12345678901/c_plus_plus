// Function
#include <iostream>
#include <functional>      // pour la classe function
using namespace std ;
class cl
{ public :
   int f_memb1 (int n) { return 2*n ; }
   int f_memb2 (int n) { return n*n ; }
} ;
int f_us (int n)          // fonction usuelle
{ return 5*n ; }
int main()
{ function <int(int)> f1 ;          // f1 represente une fonction usuelle
                                    // recevant un int et renvoyant un int
  f1 = f_us ;                       // ici f1 represente f_us
  cout << "-- f1(3) avec f_us     : " << f1(3) <<endl ;

  f1 = [] (int n) { return n*n ; } ; // ici f1 represente une lambda de meme signature
  cout << "-- f1(3) avec lambda 1 : " <<f1(3) << endl ;
  int p = 25 ;

  f1 = [p] (int n) { return n*p ; } ; // ici f1 represente une lambda de meme signature
                                      // avec une liste de capture
  cout << "-- f1(3) avec lambda 2 : " <<f1(3) << endl ;
  function <int (cl &, int)>  f2 ; // f2 represente une fonction membre de cl
                                   // recevant un int et renvoyant un int
  cl obj ;
  f2 = &cl::f_memb1 ;           // f2 représente la fonction membre f_memb1 de cl
                                // qu'on appelle pour l'objet obj
  cout << "-- f2 avec f membre1   : " << f2 (obj, 10) << endl ;

  f2 = &cl::f_memb2 ;           // f2 represente la fonction membre f_memb1 de cl
                                // qu'on appelle ici pour le meme objet obj
  cout << "-- f2 avec f membre2   : " << f2 (obj, 10) << endl ;
}