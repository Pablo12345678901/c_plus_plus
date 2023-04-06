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
    cout << "\n" ;
    {
    cout << "Création du tableau upi..." << endl ;
    unique_ptr<int[]> upi (new int [4] {1, 2, 3, 4}) ;
    cout << "parcours du tableau initial..." << endl ;
    for (int i=0; i<4; i++) cout << "t["<< i << "] = " << upi[i] << endl ;
    cout << "adaptation des valeurs..." << endl ;
    for (int i=0; i<4; i++) {upi[i] = nb ; nb++ ;}
    cout << "parcours du tableau modifié..." << endl ;
    for (int i=0; i<4; i++) cout << "t["<< i << "] = " << upi[i] << endl ;
    cout << "Suppression du tableau upi..." << endl ;
    }
    cout << "\n" ;
    {
    cout << "Création du tableau upi2..." << endl ;
    unique_ptr<int[]> upi2 (make_unique<int[]>(4)) ;
    cout << "parcours du tableau initié à 0..." << endl ;
    for (int i=0; i<4; i++) cout << "t["<< i << "] = " << upi2[i] << endl ;
    cout << "adaptation des valeurs..." << endl ;
    for (int i=0; i<4; i++) {upi2[i] = nb*nb ; nb++ ;}
    cout << "parcours du tableau modifié..." << endl ;
    for (int i=0; i<4; i++) cout << "t["<< i << "] = " << upi2[i] << endl ;
    cout << "Suppression du tableau upi2..." << endl ;
    }
}