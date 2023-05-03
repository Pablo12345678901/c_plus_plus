// Variadic
#include <iostream>
using namespace std;
void affiche () {}           // aucun argument - on ne fait rien ici
template <typename T, typename... TypeParams>
void affiche (T v, TypeParams... autresV)  // au moins un argument :
{ cout << v << endl ;                      // - affiche la valeur du premier
  affiche (autresV...) ;                   // - appelle affiche pour les autres
}
int main()
{  string ch {"bonjour"}  ;
   affiche (5, 6.7, ch) ;
}