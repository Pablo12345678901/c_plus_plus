#include <iostream>
using namespace std ;

class babe ;
class papa ;

class babe
{
    public :
        babe() : nom(""), prenom("Pablo") {} // constructeur
        void change_nom(const papa &p1) ;
        void affiche_nom(const papa &p1) ;
    private :
        string nom ;
        string prenom ;
} ;
class papa
{
    public :
        papa() : nom("ZAMORA"), prenom("Samuel") {} // constructeur
        friend class babe ;
    private :
        string nom ;
        string prenom ;
} ;


int main()
{
    papa Samuel ;
    babe Pablo ;
    Pablo.affiche_nom(Samuel) ;
    cout << "Changement de nom..." << endl ;
    Pablo.change_nom(Samuel) ;
    Pablo.affiche_nom(Samuel) ;
}

// methode amie - appelle une autre class
void babe::change_nom(const papa &p1)
{ this->nom = p1.nom ;
}
void babe::affiche_nom(const papa &p1)
{   cout << "Père : " << p1.prenom << " " << "Nom : " << p1.nom << endl ;
    cout << "Fils : " << prenom << " " << "Nom : " << nom << endl ;
}
