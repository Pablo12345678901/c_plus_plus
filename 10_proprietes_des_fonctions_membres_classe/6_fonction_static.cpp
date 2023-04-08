#include <iostream>
using namespace std;

class compteur
{
    public :
        compteur() ;
        static void affiche() ;
        ~compteur() ;
    private :
        static int nb_objets ;
} ;
int compteur::nb_objets = 0 ; // initialisation du compteur static
int main()
{
    compteur::affiche() ;
    compteur num_1, num_2 ;
    compteur::affiche() ;
    compteur num_3, num_4 ;
}

// méthode
compteur::compteur()
{ cout << "Création d'un objet." << endl ; ++nb_objets ; affiche() ;}
compteur::~compteur()
{ cout << "Destruction d'un objet." << endl ; --nb_objets ; affiche() ;}
void compteur::affiche()
{ 
    string objet = "objet" ;
    if (nb_objets>1) objet = "objets" ;
    cout << "Il y a actuellement " << nb_objets << " " << objet << "." << endl ;
}