// FonctionsArgVar1
#include <iostream>
using namespace std;
void f (initializer_list<float> val)       // val est une liste de float
{ cout << val.size() << " Valeurs : " ;
  for (float v : val) cout << v << "  " ;
  cout << endl ;
}
int main()
{ f({1.5, 2.3}) ;              // liste de 2 valeurs de type float
  f({}) ;   // liste vide (attention f {} serait considéré comme f sans arguments)
  f ({1.25, 5, 9, 3.4, 7 }) ;  // liste de 5 valeurs convertibles en float
}