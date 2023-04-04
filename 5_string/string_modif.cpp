#include <iostream>
using namespace std ;

int main()
{
    string ch_1 = "Bonjour" ;
    cout << ch_1 << endl ;
    ch_1[3]+=2 ;
    cout << ch_1 << endl ;
    cout << "Affichage de la  chaîne caractère par caractère : " << endl ;
    for (unsigned int i = 0 ; i<ch_1.size(); i++) cout << ch_1[i] << endl ;
    cout << "Pointeur" << endl ;
    auto ch_2 = "Biatch" ; // ch_2 est de type const char *
    cout << ch_2 << endl ;
    for (unsigned int i = 0 ; i<ch_1.size(); i++) cout << ch_2[i] << endl ;
}