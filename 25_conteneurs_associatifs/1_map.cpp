#include <iostream>
#include <map>
#include <strstream>
using namespace std ;

int main()
{
    map<char, int> m ;
    char carac = ' ' ;
    for (int i=32 ; i<128; i++)
    {   m[carac]=i ;
        //cout << "m[" << carac << "] = " << i << endl ; // Affichage test
        carac++ ;
    }
    
    bool error = true ;
    short TAILLE = 3 ;
    char ligne[TAILLE] ;
    while(carac!='\0')
    {  do { cout << "Caractère pour obtenir équivalent en nb : " << endl ;
            cin.getline(ligne, TAILLE, '\n') ; // récupération de la ligne (auto dernier char = '\n')
            //DEBUG cout << "cin.eof : " << cin.eof() << "\ncin.bad() : " << cin.bad() << "\ncin.fail() : " << cin.fail() << "\ncin.good() : " << cin.good() << endl ;
            if (!cin) // si failbit ou badbit ou eofbit -> ici, failbit s'actve si pas pu lire l'ensemble du contenu de cin (donc il sera ignoré) 
            {   cin.clear() ; // nettoyage d'un éventuel statut d'erreur sur la lecture de cin
                cin.ignore(INT_MAX, '\n') ; // force cin à ignorer les INT_MAX caractère après la position actuelle OU jusqu'à rencontrer '\n'
            }
            istrstream tampon(ligne, TAILLE) ; // création et assignation du tampon
            if (tampon >> carac) error = false ;
          } while (error) ;
            if (carac=='\0') break ;
            else
            {   cout << "Le caractère \'" << carac << "\' vaut : " << m[carac] << endl ;
                error = true ;
            }
    }
    cout << "Fin du programme" << endl ;
}