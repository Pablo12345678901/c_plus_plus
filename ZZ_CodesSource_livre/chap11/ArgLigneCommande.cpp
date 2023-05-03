// ArgLigneCommande
#include <iostream>
using namespace std ;
int main (int nbarg, char * argv[])
{  int i ;
   cout << "Nom programme : " << argv[0]<< "\n" ;
   if (nbarg>1) for (i=1 ; i<nbarg ; i++)
                cout << "argument numero " << i << " : " << argv[i] << "\n" ;
       else cout << "pas d'arguments\n" ;
}