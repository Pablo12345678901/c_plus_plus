#include <iostream>
using namespace std ;

int main()
{
    float resultat_hors_fonction ;
    float nb = 5.4e10 ;
    auto func_1 = [] (float x) -> float {
        float resultat = x*x ;
        cout << "Le carré de " << x << " est : " << resultat << endl ;
        return x*x;} ;
    resultat_hors_fonction = func_1(nb) ;
    cout << "Le résultat hors fonction est : " << resultat_hors_fonction << endl ;
}