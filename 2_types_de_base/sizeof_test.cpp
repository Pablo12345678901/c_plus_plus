#include <iostream>
using namespace std ;

int main()
{
    char carac = '1' ;
    short nb_short = 1 ;
    unsigned int nb_unsigned_int = 1 ;
    int nb_int = 1 ;
    long nb_long = 1 ;
    long long nb_long_long = 1 ;
    float nb_float = 1 ;
    double nb_double = 1 ;
    long double nb_long_double = 1 ;
    cout << "Taille des types dans l'environnement actuel : \n" ;
    cout << "Le taille d'un char vaut " << sizeof(carac) << " octets.\n" ;
    cout << "Le taille d'un short vaut " << sizeof(nb_short) << " octets.\n" ;
    cout << "Le taille d'un unsigned int vaut " << sizeof(nb_unsigned_int) << " octets.\n" ;
    cout << "Le taille d'un int vaut " << sizeof(nb_int) << " octets.\n" ;
    cout << "Le taille d'un long vaut " << sizeof(nb_long) << " octets.\n" ;
    cout << "Le taille d'un long long vaut " << sizeof(nb_long_long) << " octets.\n" ;
    cout << "Le taille d'un float vaut " << sizeof(nb_float) << " octets.\n" ;
    cout << "Le taille d'un double vaut " << sizeof(nb_double) << " octets.\n" ;
    cout << "Le taille d'un long double vaut " << sizeof(nb_long_double) << " octets.\n" ;
    cout << "Fin du programme.\n" ;
}