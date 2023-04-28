#include <thread>
#include <iostream>
#include <string>
using namespace std ;

// Prototypes
void fonction_bjr(string prenom) ;
void fonction_bsr() ;
void fonction_end() ;

int main()
{   thread t1 (fonction_bjr, "Pablo") ; // thread t1 sur fonction "fonction_bjr" en transmettant l'argument "Pablo" à cette fonction
    thread t2 (fonction_bsr) ;
    t1.join() ;
    t2.join() ; // tant que les processus 1 et 2 ne sont pas terminés, pas de retour à la ligne
    thread t3 (fonction_end) ;
    t3.join() ;
    thread t4 ([] (){cout << "Fonction lambda" << endl ;}) ;
    t4.join() ;
}

// Définitions des fonctions
void fonction_bjr(string prenom)
{ for (int i=0; i<5; i++) cout << "Bonjour " << prenom << endl ;
}
void fonction_bsr()
{ for (int i=0; i<3; i++) cout << "Bonsoir " << endl ;
}
void fonction_end()
{ cout << "Fin du programme" << endl ;
}