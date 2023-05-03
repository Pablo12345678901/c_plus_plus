//DebordementVector
#include <iostream>
using namespace std;
#include <vector>
int main()
{   const int N = 10 ;   // ou constexpr depuis C++11
    vector<int> t(N) ;
    t[12] = 5 ;   // on modifie un emplacement situe hors du tableau
    cout << "t[12] =  " << t[12] << endl ;
    cout << "t[100] = " << t[100] << endl ;   // t[100] est en dehors de t
    cout << "t[-3] =  " << t[-3] << endl ;    // t[-3]  est en dehors de t
}