// Vector2D
#include <iostream>
#include <vector>
using namespace std;
int main()
{ vector<vector<int>> v = { {1, 2}, {2, 3, 4, 5}, {6, 7, 8} } ;   // C++11
  for (auto l : v)
  { for (auto e : l) cout << e << " " ;
    cout << endl ;
  }
}