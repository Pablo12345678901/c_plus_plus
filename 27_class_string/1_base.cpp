#include <string>
#include <iostream>
using namespace std ;

int main()
{
    string test {'a', ' ', 'b', '\0', 'c'} ;
    cout << "test {'a', '\\0', 'b', '\\0', 'c'} -> " << test << endl ;
    cout << "test.length() : " << test.length() << endl ;
}