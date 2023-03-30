#include <iostream>
using namespace std ;

int main()
{
    int i ;
    const int nb = 25 ;
    cout << "Hello World. \n" ;
    int nb_2 = 1 ;
    for (i=0; i<5; i++) nb_2++ ;
    constexpr int carre = nb * nb ;
    constexpr float x = 42.0;
    std::cout << x << "\n" ;
    cout << "Le carré de : " << nb << " vaut : " << carre << ".\n" ;
    std::cout << __cplusplus << "\n";
}

