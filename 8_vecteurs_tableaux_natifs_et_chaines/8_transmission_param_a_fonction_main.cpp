#include <iostream>
using namespace std;

// runner avec "./nomfichiersansextension" param1 param2 .. paramN

int main(int nbarg, char * argv[])
{
    cout << "Le nom du programme est : " << argv[0] << endl ;
    if (nbarg>1)
    {
        cout << "La fonction main a reçu " << nbarg << " arguments (y.c. le nom du programme)." << endl ;
        for (int i=1 ; i<nbarg; i++) cout << "L'argument " << i+1 << " est : " << argv[i] << endl ;
    }
    else 
    {
        cout << "La fonction main a reçu " << nbarg << " argument (y.c. le nom du programme)." << endl ;
        cout << "Il n'y a pas d'autre argument en dehors du nom du programme." << endl ;
    }
    cout << "Fin du programme." << endl ; 
}