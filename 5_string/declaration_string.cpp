#include <iostream>
using namespace std ;

int main()
{
    string ch_1 = "Bonjour" ;
    string ch_2("comment") ;
    string ch_3 {"allez"} ;
    string ch_4 = {"vous"} ;
    string ch_5(3, '?') ;
    string ch_6("") ;
    string phrase = ch_1 + ", " + ch_2 + " " + ch_3 + " " + ch_4 + " " + ch_5 ;
    cout << ch_1 << ", " << ch_2 << " " << ch_3 << " " << ch_4 << " " << ch_5 << endl ;
    while (cout << "Quel est votre prénom ? ", cin >> ch_1, ch_1.empty())
    {
        cout << "Cette chaîne est vide." << endl ;
    }
    cout << "Votre prénom : " << ch_1 << " mesure " << ch_1.size() << " caractères." << endl ;
    cout << ch_1 << " " << ch_2 << " " << ch_3 << " " << ch_4 << " " << ch_5 << endl ;
    cout << ch_6.empty() << endl ;
    cout << "Phrase :          " << phrase << endl ;
    for (int i=0 ; i<phrase.size(); i++) phrase[i] = '*' ;
    cout << "Phrase modifiée : " << phrase << endl ;
    char ref = phrase[phrase.size()] ;
    int ref_char_en_int = ref ;
    cout << "Référence du caractère au delà de la chaîne = " << ref_char_en_int << "." << endl ;
    cout << "Caractère au delà de la chaîne = \'" << ref << "\'." << endl ;
}