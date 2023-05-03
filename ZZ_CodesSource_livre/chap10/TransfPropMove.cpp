// TransfPropMove
#include <iostream>
#include <memory>
using namespace std;
void f (unique_ptr<int> up)
{ cout << "-- Dans f --   up = " << up.get() << "  *up = " << *up << endl ; }
int main()
{ auto up1 (make_unique<int> (24)) ;
  cout << "-- En 1 --    up1 = " << up1.get() << " *up1 = " << *up1 <<  endl ;
  f(move(up1)) ;
  cout << "-- En 2 --    up1 = " << up1.get() <<  endl ;
}