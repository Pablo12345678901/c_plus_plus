#include <iostream>
using namespace std ;

int main()
{
    void f(int &nb) ; // adresse d'un int non constant
    void f(const int &nb) ; // adresse d'un nb int constant
    void f(int &&nb) ; // adresse d'un int en tant que rvalue
    int g(int nb) ; // Fonction faisant appel à une copie du nb donc à sa rvalue
    int nb_1 = 15 ;
    const int nb_2 = 25 ;
    f(nb_1) ;
    nb_1++ ;
    f(nb_1) ;
    f(nb_2) ;
    //nb_2++ ; // refusé en compilation car constant
    f(g(nb_1)) ;
}

void f(int &nb)
{   cout << "Fonction : f(int &nb)" << endl ;
}
void f(const int &nb)
{   cout << "Fonction : f(const int &nb)" << endl ;
}
void f(int &&nb)
{   cout << "Fonction : f(int &&nb)" << endl ;
    cout << "Nb avant : " << nb << endl ;
    nb++ ;
    cout << "Nb après : " << nb << endl ;
}
int g(int nb)
{   return nb*nb ;
}