// Bitset
#include <iostream>
#include <bitset>
using namespace std ;
int main()
{ const int N = 12 ;
  bitset<N> bs1 ("1101101101") ;    // bitset initialise par une chaine
  long n=0x0FFF ;
  bitset<N> bs2 (n) ;               // bitset initialise par un entier
  bitset<N> bs3  ;                  // bitset initialise a zero
  cout << "bs1 = " << bs1 << endl ;
  cout << "bs2 = " << bs2 << endl ;
  cout << "bs3 = " << bs3 << endl ;
 
  if (bs3 != bs1) cout << "bs3 differe de bs1\n" ;
  bs3 = bs1 ;   // affectation entre bitset de même taille              
  cout << "bs3 = " << bs3 << endl ;
 
  if (bs3 == bs1) cout << "bs3 est maintenant egal a bs1\n" ;
  cout << "bit de rang 3 de bs3 : " << boolalpha << bs3[3] << endl ;
  bs3[3] = 0 ;
  cout << "bit de rang 3 de bs3 : " << boolalpha << bs3[3] << endl ;
  
  try
  { bs3[15] = 1 ;   // indice hors limite --> exception 
  }
  catch (exception &e)
  { cout << "exception : " << e.what() << endl ;
  }

  cout << bs3 << " & " << bs2 << " = " ; bs3 &= bs2 ; cout << bs3 << endl ;
  cout << bs3 << " | " << bs2 << " = " ; bs3 |= bs2 ; cout << bs3 << endl ;
  cout << "~ " << bs3 << " = " << ~bs3 << endl ;
  cout << "dans " << bs3 << " il y a " << bs3.count() << " bits a un\n" ;
  cout << bs3 << " decale de 4 a gauche = " ;   // separer les deux affichages
  cout << (bs3 <<= 4) << endl ;     // pour eviter pb ordre evalution arguments

  bitset<14> bs4 ;
  //  bs4 = bs1 ;  serait incorrect car bs1 et bs4 n’ont pas la même taille
}