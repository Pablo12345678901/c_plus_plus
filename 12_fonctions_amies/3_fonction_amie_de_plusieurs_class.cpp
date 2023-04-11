#include <iostream>
using namespace std ;

class babe ;
class papa ;
class dieu
{
    public :
    //dieu() : x(0) {} ; // constructeur optionnel
    void affiche(const papa &p, const babe &b) ;
    private :
    //    int x ; // optionnel
} ;
class babe
{
    public :
        babe() : nom(""), prenom("Pablo") {} // constructeur
        void change_nom(const papa &p1) ;
        void affiche_nom() {cout << "Prénom : " << prenom << "\n" << "Nom : " << nom << endl ;}
        friend void dieu::affiche(const papa &p, const babe &b) ;
    private :
        string nom ;
        string prenom ;
} ;
class papa
{
    public :
        papa() : nom("ZAMORA"), prenom("Samuel") {} // constructeur
        friend void babe::change_nom(const papa &p1) ;
        friend void dieu::affiche(const papa &p, const babe &b) ;
    private :
        string nom ;
        string prenom ;
} ;


int main()
{
    papa Samuel ;
    babe Pablo ;
    Pablo.affiche_nom() ;
    cout << "Changement de nom..." << endl ;
    Pablo.change_nom(Samuel) ;
    Pablo.affiche_nom() ;
    dieu Godzilla ;
    Godzilla.affiche(Samuel, Pablo) ;
}

// methode amie - appelle une autre class
void babe::change_nom(const papa &p1)
{ this->nom = p1.nom ;}

void dieu::affiche(const papa &p, const babe &b)
{
    cout << "Je suis dieu et ai connaissance du père et du fils." << endl ;
    cout << "Père : " << p.prenom << " " << p.nom << endl ;
    cout << "Fils : " << b.prenom << " " << b.nom << endl ;
}