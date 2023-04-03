#include <iostream>
using namespace std ;

void show_list(initializer_list<double> list) ;

int main()
{
    show_list({}) ; // liste vide
    show_list({3.14e8}) ; // liste avec 1 valeur
    show_list({1.0, 2.3, 4.1e10}) ; // liste avec plusieurs valeurs
    cout << "Fin du programme" << endl ;
}

void show_list(initializer_list<double> list)
{
    int nb_valeur = list.size() ;
    if (nb_valeur)
    {
      if (nb_valeur == 1)
        {
            cout << "La liste contient " << nb_valeur << " valeur qui vaut : " ;
            for (double d : list) cout << d << " " ;
            cout << endl ;
        }
      else
        {
        cout << "La liste contient " << nb_valeur << " valeur." << endl ;
        cout << "Valeurs : " ;
        for (double d : list) cout << d << " " ;
        cout << endl ;
        }
    }
    else cout << "La liste ne contient aucune valeur." << endl ;
}