// UniquePtrRetourFonction
#include <iostream>
#include <memory>
using namespace std ;
unique_ptr<int> creation(int n)
{ auto upf = make_unique<int> (n) ;
  return upf ;
}
int main()
{ auto up = creation(5) ;
  cout << "*up = " << *up << endl ;
  up = creation(7) ;   cout << "*up = " << *up << endl ;
  up = creation(9) ;  cout << "*up = " << *up << endl ;
  up = unique_ptr<int> (new int(11)) ;  cout << "*up = " << *up << endl ;
  up = make_unique<int> (13) ;  cout << "*up = " << *up << endl ;
}