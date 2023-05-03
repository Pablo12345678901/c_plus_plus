// ExempleVector
#include <iostream>
#include <vector>                  // pour le type vector
using namespace std ;
int main()
{  unsigned int nb ;               // nombre de notes
   cout << "Donnez le nombre de notes : " ;  cin >> nb ;
   vector <float> notes  (nb) ;    // pour les nb notes
   for (unsigned int i=0 ; i<nb ; i++)      // lecture des notes
    { cout << "Donnez la note numero " << i+1 << " : " ;
      cin >> notes[i] ;
    }
   float som = 0 ;                 // calcul de la somme des notes
   for (unsigned int i=0 ; i<nb ; i++)  som += notes[i] ;
      // ou (C++11 - voir § 1.4) :  for (auto note:notes)  som += note ;
   float moy = som / nb ;
   cout << "Moyenne de la classe : " << moy << endl ;
   int nbm = 0 ;                   // calcul nb notes >= moyenne
   for (unsigned int i=0 ; i<nb ; i++ ) if (notes[i] > moy) nbm++ ;
      // ou (C++11 - voir § 1.4) :  for (auto note:notes) if (note>moy) nbm ++ ;
   cout << nbm << " eleves ont plus de cette moyenne" << endl;
}