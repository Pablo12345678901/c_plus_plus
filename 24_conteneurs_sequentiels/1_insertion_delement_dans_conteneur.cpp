#include <iostream>
#include <list>
using namespace std;

int main()
{   list <int> l_int {0, 1, 2, 3, 4, 5} ;
    list <int>::iterator it ; // iterateur sens normal - possibilité de modifier la valeur de l'élément de la liste

    cout << "Affichage initial -> l_int.size() " << l_int.size() << endl ; 
    int i=0 ;
    for (it = l_int.begin() ; it != l_int.end() ; it++, i++) cout << *it << " " ;
    cout << endl ;

    it = l_int.begin() ;
    l_int.insert(it, 25) ;
    it = l_int.end() ;
    l_int.insert(it, 42) ;

    cout << "Après insertion de 25 en position begin et 42 en position end -> l_int.size() " << l_int.size() << endl ; 
    i=0 ;
    for (it = l_int.begin() ; it != l_int.end() ; it++, i++) cout << *it << " " ;
    cout << endl ;

    it = l_int.begin() ;
    l_int.insert(it, 3, 111) ;
    cout << "Après insertion de 3 fois la valeur 111 en position begin -> l_int.size() " << l_int.size() << endl ; 
    i=0 ;
    for (it = l_int.begin() ; it != l_int.end() ; it++, i++) cout << *it << " " ;
    cout << endl ;

    l_int.erase(l_int.begin()) ;
    cout << "Après suppression du premier élément -> l_int.size() " << l_int.size() << endl ; 
    i=0 ;
    for (it = l_int.begin() ; it != l_int.end() ; it++, i++) cout << *it << " " ;
    cout << endl ;

}