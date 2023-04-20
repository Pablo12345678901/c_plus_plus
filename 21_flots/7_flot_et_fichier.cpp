#include <cstdlib> // pour fonction "exit"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    string nom_fichier ;
    int nb ;
    cout << "Nom du fichier à créer : " ;
    cin >> nom_fichier ;
    ofstream sortie (nom_fichier, ios::out | ios::binary) ; // ouverture du fichier en mode écriture (binaire)
    if (!sortie)
    {   cout << "Création impossible" << endl ; // si erreur recontrée, alors message d'erreur + quitte programme
        exit(1) ;
    }
    cout << "Veuillez saisir une liste de nombre (enter après chacun) au clavier (tapez 0 pour arrêter la saisie)." << endl ;
    do
    {   cin >> nb ;
        if (nb) sortie.write((char *) &nb, sizeof(int)) ; // rédaction en mode binaire du nombre via son adresse convertie en chaîne de char de taille sizeof(int) octets
    } while (nb && (sortie)) ; // tant que pas d'erreur ni que l'entier saisi = 0
    sortie.close() ;
    cout << "Fin de la rédaction du fichier..." << endl ;
    cout << endl ;
    ifstream entree (nom_fichier, ios::in | ios::binary) ; // ouverture du fichier en mode lecture
    if (!entree)
    {   cout << "Création impossible" << endl ; // si erreur recontrée, alors message d'erreur + quitte programme
        exit(1) ;
    }
    while (entree.read((char *) &nb, sizeof(int)))
    { cout << nb << endl ;
    }
    entree.close() ;
    cout << "Fin de la lecture du fichier..." << endl ;
    cout << endl ;
    cout << "Fin du programme..." << endl ;
}