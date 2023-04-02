#include <iostream>
using namespace std ;

int main()
{
    if (int i=1 ; ++i) cout << "i a été initialisé à une valeur différente de -1" << endl ;
    else cout << "i a été initialisé à la valeur de -1" << endl ;
    if (int i=-1 ; ++i) cout << "i a été initialisé à une valeur différente de -1" << endl ;
    else cout << "i a été initialisé à la valeur de -1" << endl ;
    switch (int n = -1 ; n)
    {
        case -1 : cout << "n vaut : -1" << endl ; break ;
        case 0 : cout << "n vaut : 0" << endl ; break ;
        case +1 : cout << "n vaut : +1" << endl ; break ;
        default : cout << "n ne vaut ni -1, ni 0, ni 1." << endl ;
    }
}