#include <iostream>
using namespace std ;

int main()
{
    int nb ;
    bool choix ;
    cout << "Êtes-vous gay ?\n" ;
    cout << "Tapez 1 pour vrai ou 0 pour faux.\n" ;
    cin >> nb ;
    if (nb == 1) choix = true ;
    else if (nb == 0) choix = false ;
    else cout << "ERREUR : vous n'avez tapé ni 0 ni 1.\n" ;
    cout << "Vous avez répondu : " << choix << " à la question : \"Êtes-vous gay ?\"\n" ;
}

