//AccesCarChaine2
#include <iostream>
using namespace std;
int main()
{ string ch = "bonjour" ;
  cout << "En A - caracteres de ch = " ;
  for (auto c : ch) cout << c << " " ;
  cout << endl ;
  cout << "En B - ch = " ;
  for (auto & c : ch) c='x' ;
  cout << ch << endl ;
  cout << "En C - ch = " ;
  for (auto c : ch) c='y' ;
  cout << ch << endl ;
}