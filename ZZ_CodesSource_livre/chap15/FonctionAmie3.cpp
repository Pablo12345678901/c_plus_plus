// FonctionAmie3
#include <iostream>
using namespace std ;
       // ********* Declaration de la classe matrice ************
class vect ;                    // pour pouvoir compiler correctement
class matrice
{  double mat[3] [3] ;         // matrice 3 X 3
  public :
   matrice (double t[3][3])    // constructeur, a partir d’un tableau 3 x 3 
   { for (int i=0 ; i<3 ; i++) 
       for (int j=0 ; j<3 ; j++) 
         mat[i] [j] = t[i] [j] ;
   }
   vect prod (const vect &) const ;  // prod = fonction membre (cette fois)
} ;
       // ********* Declaration de la classe vect **************
class vect 
{  double v[3] ;      // vecteur a 3 composantes
  public :
   vect (double v1=0, double v2=0, double v3=0) : v {v1, v2, v3} { }// constructeur
   friend vect matrice::prod (const vect &) const ;     // prod = fonction amie 
   void affiche () const
   { for (int i=0 ; i<3 ; i++) cout << v[i] << " " ;
     cout << endl ;
   }
} ;
        // ********* Definition de la fonction prod ************
vect matrice::prod (const vect &x) const
{ vect res ;     // pour le resultat du produit
  for (int i=0 ; i<3 ; i++)
  { double som = 0 ;
    for (int j=0 ; j<3 ; j++)
      som += mat[i] [j] * x.v[j] ;
    res.v[i] = som ;  
  }
  return res ;
}
      // ********** Un petit programme de test *********
int main()
{  vect w (1,2,3) ;
   vect res  ; 
   double tb [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} } ;
   matrice a =  tb  ;
   res = a.prod (w) ;
   res.affiche () ;
} 