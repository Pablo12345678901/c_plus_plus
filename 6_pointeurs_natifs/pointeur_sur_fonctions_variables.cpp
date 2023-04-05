#include <iostream>
using namespace std ;

// prototypes
void addition(void (*ad_sur_fonction_affiche)(int nb), int nb, int nb_2) ;
void multiplication(void (*ad_sur_fonction_affiche)(int nb), int nb, int nb_2) ;
void (*ad) (void (*ad_sur_fonction_affiche)(int nb), int nb, int nb_2) ;
void affiche(int nb) ;
void (*ad_sur_fonction_affiche)(int nb) ;

int main()
{
    int nb_1 = 20, nb_2 = 30 ;
    bool choix = true ;
    for (int i=0 ; i<10 ; i++)
    {
        cout << "Boucle n°" << i+1 << endl ;
        if (choix)
        {
            cout << "Pointeur sur fonction addition." << endl ;
            ad = addition ;
            ad_sur_fonction_affiche = affiche ;
            ad(ad_sur_fonction_affiche, nb_1, nb_2) ;
        }
        else
        {
            cout << "Pointeur sur fonction multiplication." << endl ;
            ad = multiplication ;
            ad(ad_sur_fonction_affiche, nb_1, nb_2) ;
        }
        choix = !choix ; // changement du bool à chaque boucle pour changer de fonction
    }
}

// fonctions
void addition(void (*ad_sur_fonction_affiche)(int nb), int nb, int nb_2)
{
    (*ad_sur_fonction_affiche)(nb) ;
    cout << "La somme de " << nb << "+" << nb_2 << " = " << nb+nb_2 << endl ;
}

void multiplication(void (*ad_sur_fonction_affiche)(int nb), int nb, int nb_2)
{
    (*ad_sur_fonction_affiche)(nb_2) ;
    cout << "Le produit de " << nb << "*" << nb_2 << " = " << nb*nb_2 << endl ;
}

void affiche(int nb)
{
    cout << "Le nombre est " << nb << endl ;
}
