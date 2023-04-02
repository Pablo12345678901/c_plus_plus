#include <iostream>
using namespace std ;

int main()
{
    const int LIMITE = 20 ;
    int n ;
    do {
            cout << "Donnez un entier autours de " << LIMITE << " : " ;
            cin >> n ;
            switch (n)
            {
                case LIMITE-1 : cout << "Limite-1" << endl ; break ;
                case LIMITE : cout << "Limite" << endl ; break ;
                case LIMITE+1 : cout << "Limite+1" << endl ; break ;
                default : cout << "Default" << endl ;
            }
        } while (n!=0) ;
    cout << "Fin du programme" << endl ;
}