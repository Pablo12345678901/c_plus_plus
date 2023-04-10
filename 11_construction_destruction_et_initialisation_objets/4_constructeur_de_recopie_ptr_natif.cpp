#include <iostream>
using namespace std;

class vect
{
    public :
        vect(int nb) : nb_el(nb), adr(new double [nb_el])
        { cout << "Objet crée en : " << this << " et vecteur de " << nb_el << " valeurs créé en : " << adr << endl ; }; // constructeur
        vect(vect & v_) : nb_el(v_.nb_el), adr(new double [nb_el])
        { cout << "Objet copié en : " << this << " et vecteur de " << nb_el << " valeurs copié en : " << adr << endl ; 
        for (int i=0; i<nb_el; i++) adr[i] = v_.adr[i] ;
        }; // constructeur de recopie
        void donner_valeur() ; // attibution des valeurs au vecteur par l'utilisateur
        void afficher_valeur() ;
        ~vect() // destructeur
        { cout << "Objet détruit en : " << this << " et vecteur de " << nb_el << " valeurs détruit en : " << adr << endl ;
         delete[] adr ;  adr = nullptr ; // destruction manuelle du ptr natif
         }; 
    private :
        int nb_el ;
        double * adr ;
} ;
void fonction_bidon(vect v) ; // prototype
int main()
{   
    vect v1(4) ;
    v1.donner_valeur() ;
    fonction_bidon(v1) ;
    cout << "Après la fonction." << endl ;
}
// méthode de class
void vect::donner_valeur()
{
    cout << "Donnez les " << nb_el << " valeurs (en type double) du vecteur séparées par des espaces." ;
    for (int i=0; i<nb_el; i++) cin >> adr[i] ;
    cout << "Fin de l'attribution..." << endl ;
    afficher_valeur() ;
}
void vect::afficher_valeur()
{
    cout << "Voici votre vecteur : " ;
    for (int i=0; i<nb_el; i++) cout << adr[i] << " " ;
    cout << endl ;
}
// Fonction hors class
void fonction_bidon(vect v)
{
    cout << "Appel fonction bidon qui copie le vecteur (ne le modifie pas)." << endl;
    cout << "Affichage des valeurs copiées du vecteur." << endl ;
    v.afficher_valeur() ;
}