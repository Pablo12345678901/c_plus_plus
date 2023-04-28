#include <thread>
#include <iostream>
#include <string>
#include <chrono>
using namespace std ;

// Prototypes
void fonction_bjr(string prenom, int ms) ;
void fonction_bsr(int ms) ;
void fonction_end() ;

int main()
{   thread t1 (fonction_bjr, "Pablo", 1000) ;
    thread t2 (fonction_bsr, 3000) ;
    t1.join() ;
    t2.join() ;
    thread t3 (fonction_end) ;
    t3.join() ;
}

// Définitions des fonctions
void fonction_bjr(string prenom, int ms)
{   for (int i=0; i<9; i++)
    {   cout << "Bonjour " << prenom << endl ;
        this_thread::sleep_for(chrono::milliseconds(ms)) ;
    }
}
void fonction_bsr(int ms)
{   for (int i=0; i<3; i++)
    {   cout << "Bonsoir " << endl ;
        this_thread::sleep_for(chrono::milliseconds(ms)) ;
    }
}
void fonction_end()
{ cout << "Fin du programme" << endl ;
}