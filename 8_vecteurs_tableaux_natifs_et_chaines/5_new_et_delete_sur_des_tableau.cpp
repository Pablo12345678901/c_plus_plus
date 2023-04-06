#include <iostream>
using namespace std;

int main()
{
    static int nb = 0 ;
    int * ad = new int [10] ;
    //auto ad = new int [10] ;
    cout << "adaptation des valeurs..." << endl ;
    for (int i=0; i<10; i++) {ad[i] = nb ; nb++ ;}
    cout << "parcours du tableau..." << endl ;
    for (int i=0; i<10; i++) cout << "t["<< i << "] = " << ad[i] << endl ;
    cout << "effacer le tableau..." << endl ;
    delete[] ad ;
    ad = nullptr ;
}