#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   int nb = 34 ;
    int nb_2 = '*' ;
    char carac ;
    cout << setfill('*') << setw(10) << nb << endl ; // setfill requiert un int - je force la conversion de * en int
    carac = cout.fill() ;
    cout << "Le char de remplissage est : " << carac << endl ;
}