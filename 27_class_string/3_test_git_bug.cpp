#include <string>
#include <sstream>
#include <iostream>
using namespace std ;

// code bidon - pour tester l'envoi de données à GIT car il a buggué
// NE PAS UTILISER

int main()
{
    string ligne ;
    char carac ;
    int nb ;
    string mot ;
    bool ok = false ;
    while (!ok)
    {   cout << "Donnez un caractère, suivi d'un nombre et d'un mot -> " ;
        getline(cin, ligne) ;
        istringstream tampon(ligne) ;
        if (tampon >> carac)
        {   if (tampon >> nb)
            {   if (tampon >> mot) ok = true ;
                else cout << "ERREUR : le mot est invalide." << endl ;
            }
            else cout << "ERREUR : le nombre est invalide." << endl ;
        }
        else cout << "ERREUR : le caractère est invalide." << endl ;
    }
    cout << "Merci d'avoir fourni :\ncaractère : " << carac << "\nnb : " << nb << "\nmot : " << mot << endl ;
}