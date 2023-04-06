#include <vector>
#include <iostream>
using namespace std;

void affiche(vector <int> v_int, int num) ;
void modif(vector <int> * v_int) ;

int main()
{
    vector <int> v_int_1 {1, 2, 3, 4} ;
    affiche(v_int_1, 1) ;
    // modification avec pointeur :
    //vector <int> * ad = &v_int_1 ;
    //modif(ad) ;
    // OU
    // modification avec référence :
    modif(&v_int_1) ; 
    affiche(v_int_1, 1) ;
    
}

void affiche(vector <int> v_int, int num)
{
    cout << "Le vecteur " << num << " de taille " << v_int.size() << " et contenant les valeurs : " ;
    for (int val : v_int) cout << val << " " ;
    cout << endl ;
}

void modif(vector <int> * v_int)
{
    cout << "Modification du vecteur..." << endl ;
    for (int &val : * v_int) val=val*val*val ;
}