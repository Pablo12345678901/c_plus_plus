#include <iostream>
using namespace std ;

int main()
{
    char carac = 'a' ;
    cout << "Saisissez un caractère : " << endl ;
    cin >> carac ;
    cout << "Le caractère vaut \'" << carac << "\'.\n" ;
    carac++ ;
    cout << "Le caractère vaut désormais \'" << carac << "\'.\n" ;
    cout << "Caractère converti en int " << carac+1 << endl ;
}