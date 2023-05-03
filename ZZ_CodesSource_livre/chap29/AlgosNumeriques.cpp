// AlgosNumeriques
#include <iostream>
#include <numeric>    // pour les algorithmes numeriques
using namespace std ;
void affiche (const int *) ;
int main()
{ int v1[5] = { 1, 3, -1, 4,  1} ;
  int v2[5] = { 2, 5,  1, -3, 2} ;
  int v3[5] ;
  cout << "vecteur v1                    : " ; affiche(v1) ;
  cout << "vecteur v2                    : " ; affiche(v2) ;
  cout << "somme des elements de v1      : "
       << accumulate (v1, v1+3, 0) << endl  ;         /* ne pas oublier 0 */
  cout << "produit scalaire v1.v2        : "
       << inner_product (v1, v1+3, v2, 0) << endl  ;  /* ne pas oublier 0 */
  partial_sum (v1, v1+5, v3) ;
  cout << "sommes partielles de v     1  : " ; affiche(v3) ;
  adjacent_difference (v1, v1+5, v3) ;
  cout << "differences ajdacentes de v1  : " ; affiche(v3) ;
}

void affiche (const int * v)    
{ int i ; for (i=0 ; i<5 ; i++) cout << v[i] << " " ;
  cout << endl ; 
}