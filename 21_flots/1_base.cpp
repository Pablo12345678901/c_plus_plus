#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char c = 'a' ;
    char t[] = "bonjour" ;
    for (int i=0; i<26; i++) {cout.put(c) ; c++ ;}
    cout << endl ;

    cout.write(t, 4) ;
    cout << endl ;

    short taille = 10, precision = 3 ;
    float pi = 3.14566593958 ;

    cout << "Flot de taille " << setw(3) << taille << ", précision : " << precision << "             :" << setw(taille) << setprecision(precision) << pi << endl ;
    cout << "Flot de taille " << setw(3) << taille << ", précision : " << precision << ", fixed      :" << setw(taille) << fixed << setprecision(precision) << pi << endl ;
    cout << "Flot de taille " << setw(3) << taille << ", précision : " << precision << ", scientific :" << setw(taille) << scientific << setprecision(precision) << pi << endl ;
    taille = -taille ;
    cout << "Flot de taille " << setw(3) << taille << ", précision : " << precision << "             :" << setw(taille) << setprecision(precision) << pi << endl ;
    cout << "Flot de taille " << setw(3) << taille << ", précision : " << precision << ", fixed      :" << setw(taille) << fixed << setprecision(precision) << pi << endl ;
    cout << "Flot de taille " << setw(3) << taille << ", précision : " << precision << ", scientific :" << setw(taille) << scientific << setprecision(precision) << pi << endl ;
}