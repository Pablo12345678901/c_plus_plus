#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int nb1, nb2, resultat ;
    char operateur ;
    cout << "Fournissez 2 nombres : " ;
    cin >> nb1 >> nb2 ;
    cout << "Tapez \'+\' pour une addition ou \'*\' pour une multiplication.\n" ;
    cin >> operateur ;
    if (operateur == '+')
    {
        resultat = nb1 + nb2 ; 
        cout << "La somme de " << nb1 << " et " << nb2 << " égale " << resultat << ".\n" ;
    }
    else if (operateur == '*')
    {
        resultat = nb1 * nb2 ; 
        cout << "Le produit de " << nb1 << " et " << nb2 << " égale " << resultat << ".\n" ;
    }
    else cout << "Vous n'avez pas saisi \'+\' ou \'*\'.\n" ;
    cout << "Fin du programme \n" ;
}