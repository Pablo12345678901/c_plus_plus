#include <iostream>
using namespace std ;

// prototypes
int affiche(int (*ad_fonction)(int nb_1, int nb_2), int nb_1, int nb_2, int nb_3) ;

int main()
{
    int nb_1 = 10, nb_2 = 20, nb_3 = 100 ;
    int carre ;
    cout << "Début du programme" << endl ;
    carre = affiche([] (int nb_1, int nb_2) -> int {
        cout << nb_1 << "+" << nb_2 << "=" << nb_1 + nb_2 << endl ;
        cout << "Le résultat de la somme est " << nb_1 + nb_2 << endl ;
        return nb_1 + nb_2 ;},
        nb_1, nb_2, nb_3) ;
    cout << "Le carré du résultat est : " << carre << endl ;
    cout << "Fin du programme" << endl ;
}

// fonction
int affiche(int (*ad_fonction)(int nb_1, int nb_2), int nb_1, int nb_2, int nb_3)
{
    int resultat ;
    cout << "Début fonction affiche" << endl ;
    cout << "Le nombre n°3 est " << nb_3 << endl ;
    resultat = ad_fonction(nb_1, nb_2) ;
    cout << "Fin fonction affiche" << endl ;
    return resultat*resultat ;
}
