#include <iostream>
#include <cstdlib> // pour fonction "exit"
using namespace std ;

void fonction_fin_programme() ;

int main()
{   set_terminate(fonction_fin_programme) ; // j'appelle une fonction de fin de programme sur mesure : je l'ai définie moi-même
    try
    {   const int nb = 5 ;
        throw nb ;
    }
    catch (float) // catch avec un type non correspondant à celui de l'exception > la fonction "terminate" est appelée par défaut
    // j'ai configuré la fonction "terminate" sur la fonction "fonction_fin_programme" avec "set_terminate"
    { }
    cout << "Fin normale de programme." << endl ;
}

void fonction_fin_programme()
{
    cout << "Exception non gérée : fin du programme" << endl ;
    exit(-1) ;
}