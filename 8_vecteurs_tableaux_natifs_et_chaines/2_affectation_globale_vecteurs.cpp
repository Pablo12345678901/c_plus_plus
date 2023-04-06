#include <vector>
#include <iostream>
using namespace std;

void affiche(vector <int> v_int, int num) ;

int main()
{
    vector <int> v_int_1 {1, 2, 3, 4} ;
    vector <int> v_int_2 {5} ;
    vector <int> v_int_3 {21, 22, 23, 24, 25} ;
    affiche(v_int_1, 1) ;
    affiche(v_int_2, 2) ;
    cout << "\n" ;
    cout << "Affectation globale de v2 sur le v1 : (v1 = v2) (impossible avec les tableaux)" << endl ;
    v_int_1 = v_int_2 ;
    affiche(v_int_1, 1) ;
    affiche(v_int_2, 2) ;
    cout << "\n" ;
    affiche(v_int_2, 2) ;
    affiche(v_int_3, 3) ;
    cout << "\n" ;
    cout << "Affectation globale de v3 sur le v2 : (v2 = v3) (impossible avec les tableaux)" << endl ;
    v_int_2 = v_int_3 ;
    affiche(v_int_2, 2) ;
    affiche(v_int_3, 3) ;
}

void affiche(vector <int> v_int, int num)
{
    cout << "Le vecteur " << num << " de taille " << v_int.size() << " et contenant les valeurs : " ;
    for (int val : v_int) cout << val << " " ;
    cout << endl ;
}