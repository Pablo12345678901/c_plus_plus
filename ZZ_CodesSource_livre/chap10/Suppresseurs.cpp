#include <iostream>
#include <memory>
using namespace std ;
void suppress (double * sp) { cout << "appel suppress - valeur = " << *sp << endl ;
                              delete sp ;
                            }
int main()
{ shared_ptr<double> ads (new double (12), suppress) ;
  unique_ptr <double, decltype(suppress)*> adp (new double (30), suppress) ;
}