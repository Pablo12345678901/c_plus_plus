#include <stdio.h>

int nb_def_fichier_c = 20 ; // var globale utilisée dans le fichier C++
static int nb_def_fichier_c_2 = 30 ; // var globale cachée pour le fichier C++

void affiche(int nb) // fonction
{
    printf("C : Le nombre vaut %d\n", nb) ;
}