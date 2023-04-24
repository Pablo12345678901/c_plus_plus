#include <iostream>
#include <iomanip>
#include <strstream>
using namespace std;

int main()
{   int nb ; // variables dont on souhaite la valeur
    char carac ; // variables dont on souhaite la valeur
    const int TAILLE = 10 ;
    bool error = true ;
    char ligne[TAILLE] ;
    do {
    cout << "Fournissez un nombre et un caractère séparés d'un espace : " ;
    cin.getline(ligne, TAILLE, '\n') ; // récupération de la ligne - max X char (auto dernier char = '\n')
    //DEBUG cout << "cin.eof : " << cin.eof() << "\ncin.bad() : " << cin.bad() << "\ncin.fail() : " << cin.fail() << "\ncin.good() : " << cin.good() << endl ;
    if (!cin) // si failbit ou badbit ou eofbit -> ici, failbit s'actve si pas pu lire l'ensemble du contenu de cin (donc il sera ignoré) 
    {   cin.clear() ; // nettoyage d'un éventuel statut d'erreur sur la lecture de cin
        cin.ignore(INT_MAX, '\n') ; // force cin à ignorer les INT_MAX caractère après la position actuelle OU jusqu'à rencontrer '\n'
    }
    istrstream tampon(ligne, TAILLE) ; // création et assignation du tampon
    if (tampon >> nb >> carac) error = false ;
    } while (error) ; // Boucle Tant qu'on a pas obtenu ce qu'on souhaitait
    cout << "Merci d'avoir fourni le nombre : " << nb << " et le caractère : \'" << carac << "\'" << endl ;
}