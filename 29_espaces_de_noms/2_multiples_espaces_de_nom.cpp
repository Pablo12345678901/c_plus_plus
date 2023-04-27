#include <iostream>

namespace A
{
    int nb_int = 44 ;
}

namespace B
{
    int nb_int = 88 ;
}

using B::nb_int ;

int main()
{   std::cout << "nb_int dans main : " << nb_int << std::endl ;
    void affiche() ; // prototype
    affiche() ;
}

void affiche()
{   using A::nb_int ;
    std::cout << "nb_int dans fonction affiche : " << nb_int << std::endl ;
}