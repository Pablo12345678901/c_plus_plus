#include <iostream>
#include <list>
using namespace std;

void affiche(int nb) ; // prototype
bool impair(int nb) ; // prototype

int main()
{   int taille = 6 ; 
    list <int> l_int {0, 1, 2, 3, 4, 5} ;
    for_each(l_int.begin(), l_int.end(), [] (int nb) {cout << nb << " " ;}) ; // avec fonction lambda
    cout << endl ;
    cout << endl ;

    for_each(l_int.begin(), l_int.end(),  affiche) ; // avec fonction que j'ai crée
    cout << endl ;
    cout << endl ;

    for( auto it = l_int.begin() ; it!=l_int.end() ; it++) cout << *it << " " ; // avec boucle for
    cout << endl ;
    cout << endl ;

    auto il = find_if(l_int.begin(), l_int.end(),  impair) ;
    cout << "Le premier nombre impair est "<< *il << endl ;
    cout << endl ;
    cout << endl ;

    for( auto it = l_int.begin() ; it!=l_int.end() ; it++)
    {if (impair(*it)) cout << *it << " est impair." << endl ;
    else cout << *it << " est pair." << endl ;
    }

}

void affiche(int nb)
{ cout << nb << " " ;
}

bool impair(int nb)
{ return nb%2 ;
}