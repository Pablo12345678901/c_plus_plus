#include <iostream>
using namespace std ;

class mere
{   public :
        virtual void affiche() const = 0 ; // fonction virtuelle pure
        virtual ~mere() {} ; // virtuelle pour pouvoir appliquer le polymorphisme au destructueur
} ;
struct element
{   element * suivant ; // pointeur sur l'élément suivant
    mere * contenu ;    // pointeur sur objet quelconque dérivé de la class mère
} ;
class liste
{   private :
        // set a const pointer to a class member through constructor
        element * const debut ; // pointeur sur le début de la liste - constant car le premier élément ne change pas
        element * courant ; // pointeur sur l'élément courant
    public :
        
        liste(mere * chose, element * const adel) ;
        //liste(mere * chose) ; // constructeur : initialisation des 2 pointeurs "debut" et "courant" avec la création du premier élément
        ~liste() ; // fonction définie plus loin
        void ajoute (mere *) ; // fonction définie plus loin
        void premier() {courant = debut ;} // fonction qui se positionne sur le 1er élément pour le début
        // car le pointeur courant est modifié ailleurs à chaque ajout d'un nouvel élément
        mere * prochain() // fonction qui retourne le pointeur sur le contenu de l'objet actuel et change par la même occasion le pointeur courant
        {   mere * adsuiv = nullptr ;
            if (courant!=nullptr) // Tant que pas atteint la fin de la liste
            {   adsuiv = courant->contenu ; // obtention de l'information de l'objet : le pointeur adsuiv pointe sur le contenu de l'objet
                courant = courant->suivant ; // décalage de 1 : le pointeur courant pointe sur l'adresse de l'élément suivant
            }
            return adsuiv ; // retourne l'adresse pointée 
        }
        void affiche_liste() ; // fonction définie plus loin
        int fini() { return (courant==nullptr) ;} // test si arrivé à la fin de la liste
        liste(const liste &) = delete ; // interdiction de copie
        liste & operator = (const liste &) = delete ; // interdiction d'affectation
} ;

// Méthodes membres de liste :
liste::~liste() // destruction de liste élément par élément
{   element * suiv ;
    courant = debut ; // mise au début de la liste
    while (courant!=nullptr) // tant que pas atteint la fin de la liste
    {   suiv = courant->suivant ; // décalage de 1 du pointeur suiv
        delete courant ; // destruction du contenu de l'élément courant
        courant = suiv ; // passage à l'élément suivant
    }
}
void liste::ajoute(mere * chose) // ajout d'un élément au début de la liste
{   element * suiv ;
    element * adel = new element ;
    adel->suivant = nullptr ; // le dernier élément à un pointeur nul dans l'élément suivant = fin de liste
    adel->contenu = chose ; // le contenu reçoit le pointeur en argument = l'adresse de la chose
    premier() ; // mise au début de la liste (courant = début)
    while (courant!=nullptr) // tant que pas atteint la fin de la liste
    {   if (!courant->suivant)
        {   courant->suivant = adel ; // si le suivant est un pointeur nul,
        // alors c'est qu'on est fin de liste > ajout du pointeur vers le suivant
            break ; // sortie de la boucle
        }
        else
        {   suiv = courant->suivant ; // décalage de 1 du pointeur suiv
            courant = suiv ; // passage à l'élément suivant
        }
    }
    premier() ; // remise du pointeur courant au début en fin de fonction
}
liste::liste(mere * chose, element * const adel) : debut(adel) // définition du pointeur constant via le constructeur
{   adel->suivant = nullptr ; // le dernier élément à un pointeur nul dans l'élément suivant = fin de liste
    adel->contenu = chose ; // le contenu reçoit le pointeur en argument = l'adresse de la chose (= objet)
    premier() ; // remise du pointeur courant au début en fin de fonction
}
void liste::affiche_liste() // affiche tous les éléments de la liste un par un
{   mere * ptr ;
    premier() ; // fonction qui se positionne sur le 1er élément
    while (!fini()) // tant qu'on a pas atteint la fin de la liste
    {   ptr = (mere *) prochain() ; // récupération du contenu de l'élément (= objet) en cours et conversion en pointeur class mere
        ptr->affiche() ; // polymorphisme sur cet objet - voir sa propre définition de la fonction affiche()
    }
}

// Class héritant de mere
class point : public mere // hérite de mere
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Constr. d'un point." << endl ;}
        void affiche() const {cout << "AFFICHE : Point en x y : " << x << " " << y << endl ;} // polymorphisme appliqué ici
        ~point() {cout << "Destruction d'un point en x y : " << x << " " << y << endl ;}
    private :
        int x, y ;

} ;
class biatch : public mere // hérite de mere
{   public :
        biatch(string mot="") : nom(mot) {cout << "Constr. d'une biatch." << endl ;}
        void affiche() const {cout << "AFFICHE : Cette biatch s'appelle : " << nom << endl ;} // polymorphisme appliqué ici
        ~biatch() {cout << "Destruction d'un biatch qui s'appelle : " << nom << endl ;}
    private :
        string nom ;
} ;
class mot : public mere // hérite de mere
{   public :
        mot(char c_1, char c_2, char c_3, char c_4, char c_5) : c1(c_1), c2(c_2), c3(c_3), c4(c_4), c5(c_5) {cout << "Constr. d'un mot." << endl ;}
        void affiche() const {cout << "AFFICHE : Le mot est : " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl ;} // polymorphisme appliqué ici
        ~mot() {cout << "Destruction du mot : " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl ;}
    private :
        char c1, c2, c3, c4, c5 ;
} ;

// PROGRAMME
int main()
{
    point p0(0, 1), p1(12, 25), p2(12, 7) ;
    biatch b1("Salope"), b2("Pute") ;
    mot m('c', 'w', '^', '0', '!') ;
    element * const adel = new element ;
    liste l(&p0, adel) ; // transmission du 1er objet par adresse pour permettre la conversion
    // d'une référence objet class X en référence objet class mere
    // transmission d'un pointeur constant sur le premier élément pour définir le pointeur du début = constant
    l.ajoute(&p1) ; 
    l.ajoute(&b1) ;
    l.ajoute(&m) ;
    l.ajoute(&p2) ; 
    l.ajoute(&b2) ;
    cout << endl ;
    cout << "Ordre d'affichage : p0, p1, b1, m, p2, b2" << endl ;
    l.affiche_liste() ;
    cout << endl ;
    return 0 ;
}
