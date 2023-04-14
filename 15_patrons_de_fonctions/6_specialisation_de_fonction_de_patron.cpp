#include <iostream>
using namespace std ;
#include <string>


// patron de fonction
template <typename T> T minimum (T nb_1, T nb_2)
{   if (nb_1 < nb_2) return nb_1 ; else return nb_2 ;
}

// spécialisation de fonction de patron
char const * minimum(char const * adr1, char const * adr2)
{   if (strcmp(adr1, adr2) < 0) return adr1 ; else return adr2 ;
}


int main()
{
    int nb_1 = 10, nb_2 = 20 ;
    cout << "int : nb_1 = " << nb_1 << ", nb_2 = " << nb_2 << ", min = " << minimum(nb_1, nb_2) << endl ;
    char const * adr1 = "bonjour" ;
    char const * adr2 = "monsieur" ;
    cout << "Chaîne : adr1 = " << *adr1 << ", adr2 = " << *adr2 << ", min = " << minimum(adr1, adr2) << endl ;
}