#include <iostream>
#include <list>
#include <iterator>
using namespace std ;
// ci-dessus pour la partie itérateur, ci-dessous pour la gestion de rédaction de fichier

#include <cstdlib> // pour fonction "exit"
#include <iomanip>
#include <fstream>

int main()
{
    string t = {"essai iterateur de flot\n"} ;
    list<char> l ;

    // Rédaction de fichier
    string nom_fichier ;
    string ligne ;
    char carac ;
    cout << "Nom du fichier à créer : " ;
    //cin >> nom_fichier ;
    nom_fichier = "test.abc" ;
    //cin.get(carac) ; // récupère le caractère '\n' de fin de saisie
    ofstream sortie (nom_fichier, ios::out | ios::binary) ; // ouverture du fichier en mode écriture (out) binaire
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
    // fin rédaction du fichier

    ifstream fich(nom_fichier, ios::in| ios::binary) ; // ouverture en mode lecture avec in
    istream_iterator<char> flcar(fich), fin ; // ptrdiff_t est un nom pré-disponible (pas créé par moi)
    //istream_iterator
    copy(flcar, fin, inserter(l, l.begin())) ; // copy dans la liste
    cout << "Affichage du contenu de la liste : " ;
    for (auto el : l) cout << el ;
    cout << endl ;
}