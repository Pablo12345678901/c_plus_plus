#include <iostream>
using namespace std ;

int main()
{
    for (int i=1 ; i<=10 ; i++) cout << "Boucle n°" << i << endl ;
    for (float f=1.1 ; f<=10 ; f+=0.1) 
    {
        cout << "Boucle n°" << f << endl ;
        if (f>=2) goto sortie ;
    }
    sortie : cout << "Fin du programme" << endl ;
}