#include <cstdlib> // pour fonction "exit"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    string nom_fichier ;
    string ligne ;
    char carac ;
    cout << "Nom du fichier à créer : " ;
    cin >> nom_fichier ;
    cin.get(carac) ; // récupère le caractère '\n' de fin de saisie
    ofstream sortie (nom_fichier, ios::out) ; // ouverture du fichier en mode écriture non binaire (texte)
    if (!sortie)
    {   cout << "Création impossible" << endl ; // si erreur recontrée, alors message d'erreur + quitte programme
        exit(1) ;
    }
    cout << "Veuillez saisir un texte (tapez enter après une ligne vide pour arrêter la saisie)." << endl ;
    do {    getline(cin, ligne, '\n') ;
            if (ligne[0]!='\0') sortie << ligne << endl ; // écriture si pas tapé enter (donc saisi une ligne vide via getline qui retire le '\n'
            else break ; // sortie de boucle sinon
        } while (sortie) ; // tant que l'écriture fonctionne
    sortie.close() ;
    cout << "Fin de la rédaction du fichier..." << endl ;
    cout << endl ;

    ifstream entree (nom_fichier, ios::in) ; // ouverture du fichier en mode lecture texte (non binaire)
    if (!entree)
    {   cout << "Lecture impossible" << endl ; // si erreur recontrée, alors message d'erreur + quitte programme
        exit(1) ;
    }
    string nb_str ;
    while (getline(entree, nb_str,'\n')) cout << nb_str << endl ; // affiche le fichier texte avec les retour à la ligne idem
    entree.close() ;
    cout << "Fin de la lecture du fichier..." << endl ;
    cout << endl ;

    cout << "Fin du programme..." << endl ;
}