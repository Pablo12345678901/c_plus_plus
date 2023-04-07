#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

class hasard
{
    public :
        hasard(int nb, int max) ; // constructeur
        void affiche() ;
        ~hasard() ; // destructeur
    private :
        int nb ;
        int max ;
        vector<int> serie ;
} ;

int main()
{
    // programme ;
    {
        hasard vec_1(10, 9) ;
        vec_1.affiche() ;
    }
    {
        hasard vec_2(5, 3) ;
        vec_2.affiche() ;
    }
}

// Méthodes de classe
hasard::hasard(int n, int m) : nb(n), max(m)
{
    if (nb<=0) nb=1 ; if (max<=0) max=1;
    cout << "Création d'un vecteur de " << nb << " valeurs allant de 0 à " << max-1 << endl ;
    serie = vector<int> (nb) ;
    for (int i=0; i<nb; i++) serie[i] = (double) rand() / RAND_MAX * max ;
    cout << "Fin de la création" << endl ;
}

void hasard::affiche()
{
    cout << "Voici les " << nb << " valeurs du vecteur allant de 0 à " << max-1 << endl ;
    for (int i=0; i<nb; i++) cout << serie[i] << " " ;
    cout << endl ;
}

hasard::~hasard()
{
    cout << "Destruction du vecteur" << endl ;
}