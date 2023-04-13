#include <iostream>
using namespace std ;

class complex
{
    public :
        complex(double val=0) : reel(val), img(0) {cout << "Constructeur avec conversion double en complex..." << endl ; }
        void affiche() {cout << "Le nombre complexe vaut : " << reel << " + " << img << " i" << endl ; }
        friend complex operator + (complex nb_c_1, complex nb_c_2) ;// fonction amie pour additionner 2 nombres complexes
        double reel, img ; // je mets les membres en public pour pouvoir modifier la partie imaginaire via la fonction main
    private :
        // rien
} ;

int main()
{
    complex nb_c_1(25) ;
    nb_c_1.affiche() ;
    cout << endl ;

    cout << "Adaptation de la partie imaginaire du nombre..." << endl ;
    nb_c_1.img = 123 ;
    nb_c_1.affiche() ;
    cout << endl ;

    char carac = 'c' ;
    int nb_int = 'c' ;
    cout << "Le caractère " << carac << " vaut en int : " << nb_int << endl ;
    nb_c_1 = nb_c_1 + carac ; // conversion char (-> int) -> double -> complex puis addition de complex + complex
    nb_c_1.affiche() ;
    cout << endl ;

    float nb_float = 2.356653463e3 ;
    cout << "Le nombre float vaut : " << nb_float << endl ;
    nb_c_1 = nb_c_1 + nb_float ; // conversion float -> double -> complex puis addition de complex + complex
    nb_c_1.affiche() ;
    cout << endl ;
}

// Surdéfinition opérateur + pour 2 nb complexes
complex operator + (complex nb_c_1, complex nb_c_2)
{   complex nb_c_somme ;
    nb_c_somme.reel = nb_c_1.reel + nb_c_2.reel ; nb_c_somme.img = nb_c_1.img + nb_c_2.img ; 
    return nb_c_somme ;
}