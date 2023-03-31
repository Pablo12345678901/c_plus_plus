#include <iostream>
//using namespace std ;

int main()
{
    char carac = 'a' ;
    std::cout << "Le caractère vaut \'" << carac << "\'.\n" ;
    carac++ ;
    std::cout << "Le caractère vaut désormais \'" << carac << "\'.\n" ;
    std::cout << "Caractère converti en int " << carac+1 << std::endl ;
}