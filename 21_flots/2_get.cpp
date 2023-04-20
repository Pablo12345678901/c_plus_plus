#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char c = 'a' ;
    cout << "AVANT : " << c << endl ;
    cin.get(c) ;
    cout << "APRES : " << c << endl ;

    char carac ;
    while(cin.get(carac)) cout.put(carac) ;
    // boucle infinie tant que pas atteint la fin de fichier (eof)

    // similaire à :
    /*
    int nb ;
    while ((nb = cin.get()) !=EOF) cout.put(nb) ;
    cout << "Atteint la fin du flot." << endl ;
    */
}