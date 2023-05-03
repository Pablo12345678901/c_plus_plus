// ExempleTableauNatif
#include <iostream>
using namespace std ;
int main()
{ const int NB = 6 ;   // nombre de notes
  float notes[NB] ;    // pour les NB notes
  for (int i=0 ; i<NB ; i++)   // simplifiable avec C++11 - voir & 2.1.3
  { cout << "Donnez la note numero " << i+1 << " : " ;
    cin >> notes[i] ;
  }
  float som = 0 ;
  for (int i=0 ; i<NB ; i++)  som += notes[i] ; // Avec C++11 - voir & 2.1.3
  float moy = som / NB ;
  cout << "Moyenne de la classe : " << moy << endl ;
  int nbm = 0 ;
  for (int i=0 ; i<NB ; i++ )      // simplifiable avec C++11 - voir & 2.1.3
    if (notes[i] > moy) nbm++ ;
  cout << nbm << " eleves ont plus de cette moyenne" ;
}