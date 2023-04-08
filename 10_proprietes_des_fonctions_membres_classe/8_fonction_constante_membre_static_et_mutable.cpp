// seuls les membres static (commun à tous les objets) et mutable sont modifiable par des fonction constantes

#include <iostream>
using namespace std;

class compteur
{
    public :
        compteur() ;
        static void affiche() ;
        void trafic_compteur() const ;
        void affiche_carre() ;
        ~compteur() ;
    private :
        static int nb_objets ;
        mutable int carre ;
} ;
int compteur::nb_objets = 0 ; // initialisation du compteur static
int main()
{
    compteur::affiche() ;
    compteur num_1, num_2 ;
    num_1.trafic_compteur() ;
    compteur::affiche() ;
    compteur num_3, num_4 ;
    num_3.affiche_carre() ;
    num_4.affiche_carre() ;
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
void compteur::trafic_compteur() const
{   cout << "Trafic du compter (+1) par une fonction constante : " << ++nb_objets << " " << endl ;
    carre = nb_objets*nb_objets ;
    cout << "affichage du carré du compteur : " << carre << endl ;
}
void compteur::affiche_carre()
{ cout << "Le carré vaut : " << carre << endl ;
}