#include <iostream>
#include <list>
using namespace std;

int main()
{   int taille = 6 ; 
    list <int> l_int {0, 1, 2, 3, 4, 5} ;

    list <int>::iterator it ; // iterateur sens normal - possibilité de modifier la valeur de l'élément de la liste
    cout << "Sens normal" << endl ;
    int i=0 ;
    for (it = l_int.begin() ; it != l_int.end() ; it++, i++)
    {   cout << "Élément " << i << " : AVANT modif : " << (*it)++ << " - APRES modif : " << *it << endl ;
    }
    cout << endl ;

    list <int>::reverse_iterator rit ; // iterateur sens inverse - possibilité de modifier la valeur de l'élément de la liste
    cout << "Sens inverse" << endl ;
    i = taille-1 ;
    for (rit = l_int.rbegin() ; rit != l_int.rend() ; rit++, i--)
    {   cout << "Élément " << i << " : AVANT modif : " << (*rit)++ << " - APRES modif : " << *rit << endl ;
    }
    cout << endl ;

    list <int>::const_iterator cst_it ; // iterateur sens normal - impossibilité (const) de modifier la valeur de l'élément de la liste
    cout << "Sens normal" << endl ;
    i=0 ;
    for (cst_it = l_int.begin() ; cst_it != l_int.end() ; cst_it++, i++)
    {   cout << "Élément " << i << " : VALEUR non modifiable car const : " << *cst_it << endl ;
    }
    cout << endl ;

    list <int>::const_reverse_iterator cst_rit ; // iterateur sens inverse - impossibilité (const) de modifier la valeur de l'élément de la liste
    cout << "Sens inverse" << endl ;
    i = taille-1 ;
    for (cst_rit = l_int.rbegin() ; cst_rit != l_int.rend() ; cst_rit++, i--)
    {   cout << "Élément " << i << " : VALEUR non modifiable car const : " << *cst_rit << endl ;
    }
    cout << endl ;

}