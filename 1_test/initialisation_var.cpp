#include <iostream>
using namespace std ;

int main()
{
    int a = 5 ;
    int b(10) ;
    //int c {20} ;
    int c(20) ;
    //int d = { } ;
    //int d(30) ;
    int somme ;
    somme = a + b + c + d ;
    cout << "La somme de a : " << a << ", b : " << b << ", c : " << c << " et d : " << d << " égale : " << somme << ".\n" ;
}