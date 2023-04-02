#include <iostream>
using namespace std ;

void afficher() ; // PROTOTYPE : entre parenthèse, il est optionnel de mettre "void"

int main()
{
 afficher() ;
 afficher() ;   
 // return 0 ; // Test de la valeur de retour depuis le terminal > 0 = succès
 return EXIT_SUCCESS ; // Test de la valeur de retour depuis le terminal
 //return EXIT_FAILURE ; // Test de la valeur de retour depuis le terminal
}
void afficher() // FONCTION : entre parenthèse, il est optionnel de mettre "void"
{
    cout << "La fonction affiche cette phrase." << endl ;
    //return ; // Possible de ne pas écrire le return (le compilateur le mettra auto)
}