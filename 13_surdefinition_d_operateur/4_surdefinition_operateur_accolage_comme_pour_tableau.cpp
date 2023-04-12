#include <iostream>
#include <memory>
using namespace std;

class vect
{
    public :
        vect(int nb) : nb_el(nb), adr(make_unique<double[]>(nb))
        { cout << "Objet crée en : " << this << " et vecteur de " << nb_el << " valeurs créé en : " << adr << endl ; }; // constructeur
        vect(vect & v_) : nb_el(v_.nb_el),  adr(make_unique<double[]>(v_.nb_el))
        { cout << "Objet copié en : " << this << " et vecteur de " << nb_el << " valeurs copié en : " << adr << endl ; 
        for (int i=0; i<nb_el; i++) adr[i] = v_.adr[i] ;
        }; // constructeur de recopie
        vect & operator = (const vect &v2) ; // surdéfinition opérateur = pour la copie
        double & operator[] (int i) ; // surdéfinition opérateur [] pour accéder aux indice directement depuis l'objet
        void donner_valeur() ; // attibution des valeurs au vecteur par l'utilisateur
        void afficher_valeur() ;
        ~vect() // destructeur
        { cout << "Objet détruit en : " << this << " et vecteur de " << nb_el << " valeurs détruit en : " << adr << endl ; }; 
    private :
        int nb_el ;
        unique_ptr<double[]> adr ;
} ;
void fonction_bidon(vect v) ; // prototype
int main()
{   
    cout << "V1" << endl ;
    vect v1(2) ;
    v1.donner_valeur() ;
    cout << endl ;

    cout << "Avant fonction." << endl ;
    fonction_bidon(v1) ;
    cout << "Après fonction." << endl ;
    cout << endl ;
    
    cout << "V2" << endl ;
    vect v2 = v1 ; // passe par la copie
    v2.afficher_valeur() ;
    cout << endl ;

    cout << "V2" << endl ;
    cout << "Modification valeur v2 " << endl ;
    v2.donner_valeur() ;
    cout << endl ;

    cout << "V1 = V3 = V2" << endl ;
    vect v3(3) ;
    v1 = v3 = v2 ; // passe par la surdéfinition de l'opérateur = 
    v3.afficher_valeur() ;
    cout << endl ;

    cout << "V2" << endl ;
    cout << "Modification valeur v2" << endl ;
    v2.donner_valeur() ;
    cout << endl ;

    cout << "Affichage valeurs finales des vecteurs v1, v2, v3." << endl ;
    v1.afficher_valeur() ;
    v2.afficher_valeur() ;
    v3.afficher_valeur() ;
    cout << endl ;

    // Suite pour test surdéfinition opérateur []
    cout << "Modification valeur v3[1] = 100" << endl ;
    v3[1] = 100 ;
    v3.afficher_valeur() ;
    cout << endl ;

    cout << "Modification valeur \nv1[i]=i+6 \nv2[i]=10*i+2 \nv3[i]=20*i" << endl ;
    for (int i=0; i<2; i++)
    {v1[i]=i+6; v2[i]=10*i+2; v3[i]=20*i ;}
    cout << endl ;

    cout << "Affichage valeurs finales des vecteurs v1, v2, v3." << endl ;
    v1.afficher_valeur() ;
    v2.afficher_valeur() ;
    v3.afficher_valeur() ;
    cout << endl ;

    
}
// méthode de class
void vect::donner_valeur()
{
    cout << "Donnez les " << nb_el << " valeurs (en type double) du vecteur séparées par des espaces : " ;
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
//surdefinition operateur =
vect & vect::operator = (const vect &v2)
{   nb_el = v2.nb_el ;
    adr = make_unique<double[]>(nb_el) ;
    { cout << "Copie avec \"=\" en : " << this << " et vecteur de " << nb_el << " valeurs copié en : " << adr << endl ; 
    for (int i=0; i<nb_el; i++) adr[i] = v2.adr[i] ;
    }
    return *this ;
}
//surdefinition operateur []
double & vect::operator[] (int i)
{ return adr[i] ;
}

// Fonction hors class
void fonction_bidon(vect v)
{
    cout << "Appel fonction bidon qui copie le vecteur (ne le modifie pas)." << endl;
    cout << "Affichage des valeurs copiées du vecteur." << endl ;
    v.afficher_valeur() ;
}