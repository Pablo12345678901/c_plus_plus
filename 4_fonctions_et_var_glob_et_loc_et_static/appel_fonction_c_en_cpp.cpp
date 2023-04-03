#include <iostream>
using namespace std ;

extern "C" { // prototype C : void affiche(int nb) 
    #include "fichier_fonction_c.h"
}

void affiche(float nb) ; // Protoype C++

extern int nb_def_fichier_c ;

int main()
{
    int nb = 15 ;
    float nb_2 = 1.23 ;
    affiche(nb) ; // appel fonction C
    affiche(nb_def_fichier_c) ; // appel fonction C avec variable globale définie dans le fichier C
    affiche(nb_def_fichier_c_2) ; // BUG car var globale du fichier "C" en static donc cachée
    affiche(nb_2) ; // appel fonction C++
}

void affiche(float nb) // fonction
{
    cout << "C++ : Le nombre vaut " << nb << endl ;
}