#include <iostream>
using namespace std ;

const int & fourni_valeur_const(void) ; // Prototype

int main()
{
    cout << "Valeur constante fournie par fonction : " << fourni_valeur_const() << endl ;
}

const int & fourni_valeur_const(void)
{
    const int nb_const = 1111 ;
    return nb_const ;
    // ou en commentant la déclaration de nb_const :
    // return 1111 ;
}