#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   const int TAILLE = 21 ;
    char t[TAILLE] ;

    cout << "Quel est votre prénom et nom ? (max " << TAILLE-1 << " char) ? " ;
    cin.read(t,TAILLE-1) ;
    for (int i=0; i<TAILLE; i++)
    {   if (t[i]== '\n')
        {   t[i]='\0' ; break ;
        }
        if (i==TAILLE-1) t[i]='\0' ;
    }
    cout << t << endl ;
}