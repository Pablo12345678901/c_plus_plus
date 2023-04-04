#include <iostream>
using namespace std ;

int main()
{
    string ch_1 = "Bonjour" ;
    cout << "Avant modif : " << endl ;
    for (char &c : ch_1)
    {
        cout << c ;
        c = '*' ;
    }
    cout << endl ;
    cout << "Après modif : " << endl ;
    for (char c : ch_1) cout << c ;
    cout << endl ;
}