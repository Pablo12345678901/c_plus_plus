// Hasard
#include <iostream>
#include <vector>
#include <memory>
#include <cstdlib>        // pour la fonction rand
using namespace std ;
class hasard
{ public :
   hasard (int, int) ;
   void affiche () ;
  private :
   int nb ;             // nombre de valeurs entieres
   int max ;            // entre 0 et max
   vector<int> val ;    // pour les valeurs
} ;
hasard::hasard (int n, int m) : nb(n), max(m)
{ if (nb<=0) nb = 1 ; if (max<1) max = 1 ;
  val = vector<int>(nb) ;
  for (int i=0 ; i<nb ; i++) val[i] = double (rand()) / RAND_MAX * max ;
}
void hasard::affiche () // pour afficher les nb valeurs
{ for (int i=0 ; i<nb ; i++) cout << val[i] << " " ;
  cout << "\n" ;
}
int main()
{  hasard suite1 (15, 5) ; suite1.affiche () ;
   hasard suite2 (20, 9) ; suite2.affiche () ;
   hasard suite3 (-2, 0) ; suite3.affiche() ;
}