#include <vector>
#include <iostream>
using namespace std;

int main()
{
    unsigned int nb_notes = 0 ;
    float somme_notes = 0.0 ;
    float moyenne = 0.0 ;
    int sup_moy = 0 ;
    string accord_1 = "note" ;
    string accord_2 = "supérieure" ;
    cout << "Combien de notes y a-t-il ? " ;
    cin >> nb_notes ;
    vector <float> liste_notes (nb_notes) ;
    for (int i=0; i<nb_notes; i++)
    {
        cout << "Quelle est la note " << i+1 << " ? " ;
        cin >> liste_notes[i] ;
        somme_notes += liste_notes[i] ;
    }
    moyenne = somme_notes/nb_notes ;
    cout << "La moyenne des " << nb_notes << " notes est : " << moyenne << "." << endl ;
    for (auto note : liste_notes) if (note>moyenne) sup_moy++ ;
    if (sup_moy>1) // accord pluriel
    {
        accord_1 = "notes" ;
        accord_2 = "supérieures" ;
    }
    cout << "Il y a " << sup_moy << " " << accord_1 << " " << accord_2 << " à la moyenne de " << moyenne << "." << endl ;
}