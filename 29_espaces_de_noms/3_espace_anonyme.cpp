#include <iostream>

namespace // espace de nom anonyme, équivalent à des déclaration static
// donc inaccessible depuis d'autres fichiers que celui-ci
{   int nb_int = 1 ;
} // namespace

int main()
{    
    std::cout << "nb_int : " << nb_int << std::endl ;
}