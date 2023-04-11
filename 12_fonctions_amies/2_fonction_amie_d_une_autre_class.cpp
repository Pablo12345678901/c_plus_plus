#include <iostream>
using namespace std ;

class papa ;
class babe
{
    public :
        babe() : nom(""), prenom("Pablo") {} // constructeur
        void change_nom(const papa &p1) ;
        void affiche_nom() {cout << "Prénom : " << prenom << "\n" << "Nom : " << nom << endl ;}
    private :
        string nom ;
        string prenom ;
} ;

class papa
{
    public :
        papa() : nom("ZAMORA") {} // constructeur
        friend void babe::change_nom(const papa &p1) ;
    private :
        string nom ;
} ;

int main()
{
    papa ZAMORA ;
    babe Pablo ;
    Pablo.affiche_nom() ;
    cout << "Changement de nom..." << endl ;
    Pablo.change_nom(ZAMORA) ;
    Pablo.affiche_nom() ;
}

// methode amie - appelle une autre class
void babe::change_nom(const papa &p1)
{ this->nom = p1.nom ;}