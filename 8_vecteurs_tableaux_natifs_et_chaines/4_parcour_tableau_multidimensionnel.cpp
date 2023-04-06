#include <iostream>
using namespace std;

int main()
{
    int t[2][3] ;
    int i = 0, y = 0 ;
    cout << "Affichage avant modification..." << endl ;
    for (auto &ligne : t)
    {
        cout << "Dimension : " << y << endl ;
        for (auto element : ligne) cout << "Valeur : " << element << endl ;
        y++ ;
    }
    cout << "\n" ;
    cout << "Modification..." << endl ;
    for (auto &ligne : t)
        for (auto &element : ligne)
        {
            element = i ;
            i++;
        }
    cout << "\n" ;
    cout << "Affichage..." << endl ;
    for (auto &ligne : t)
    {
        cout << "Dimension : " << y << endl ;
        for (auto element : ligne) cout << "Valeur : " << element << endl ;
        y++ ;
    }
    cout << "\n" ;
    cout << "Affichage avec index..." << endl ;
    for (int i=0; i<2; i++)
        for (int y=0; y<3; y++) cout << "[" << i << "][" << y << "] : " << t[i][y] << endl ;
}