// TransfPropUniquePtr
#include <iostream>
#include <memory>
using namespace std;
int main()
{ auto up1 = make_unique<int> (12) ;
  auto up2 = make_unique<int> (25) ;
  cout << "-- En 1 -- up1 : " << up1.get() << " " << *up1 << endl ;
  cout << "-- En 1 -- up2 : " << up2.get() << " " << *up2 << endl ;
  up1 = move(up2) ;
  cout << "-- En 2 -- up1 : " << up1.get() << " " << *up1 << endl ;
  cout << "-- En 2 -- up2 : " << up2.get() << endl ;
}