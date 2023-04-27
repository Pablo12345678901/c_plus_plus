#include <iostream>

namespace Pablo // Déclaration d'un espace de nom
{
    int nb_int = 10 ;
    float nb_fl = 3.14 ;
} // namespace Pablo

double nb_dou = 3.3333 ; // déclaré dans l'espace global -> appelé avec ::nb_dou

int main()
{
    int nb_int = 20 ;
    float nb_fl = 2.99 ;
    double nb_dou = 1.111 ;
    std::cout << "Pablo::nb_int : " << Pablo::nb_int << "\nPablo::nb_fl : " << Pablo::nb_fl << std::endl ;
    std::cout << "nb_int : " << nb_int << "\nnb_fl : " << nb_fl << std::endl ;
    std::cout << "nb_dou : " << nb_dou << "\n::nb_dou : " << ::nb_dou << std::endl ;
}
