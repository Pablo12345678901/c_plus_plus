#include <iostream>
using namespace std;

// BUG volontairement provoqué par moi lors de la compilation si j'essaie de copier un objet par valeur
// je me sécurise contre la copie des objets
// comme la compilation bug avec un message d'erreur, c'est que ma sécurité fonctionne

class point
{
    public :
        point(int abs = 0, int ord = 0) : x(abs), y(ord) { cout << "Création de l'objet en x : " << x << " et y : " << y << endl ; } ; // constructeur - fonction en ligne
        point(const point &) = delete ; // cette formule interdit à la compilation la recopie d'un objet
        inline void deplace(int dx, int dy) ;
        void affiche(string message = "") ;
        void fonction_copie_test(point p) ;
        ~point() ; // destructeur
    private :
        int x, y ;
} ;

int main()
{
    // unique_ptr avec make_unique
    unique_ptr<point> uni_ptr_1 (make_unique<point>(1, 40)) ;
    uni_ptr_1->affiche("Position de départ : ") ;
    (*uni_ptr_1).deplace(2, 3) ;
    uni_ptr_1->affiche("Après déplacement : ") ;
    point * adr = new point(0, 0) ;
    adr->fonction_copie_test(*adr) ; // ne fonctionnera pas car j'ai manuellement interdit la recopie par valeur avec la fonction "point(const point &) = delete ;"
}

// Fonctions membres de la class "point"
void point::deplace(int dx, int dy)
{ x+=dx ; y+=dy ; cout << "Déplacement de l'objet en x : " << x << " et y : " << y << endl ;
}
void point::affiche(string message)
{ cout << message << "Adresse : " << this << " - Je suis en x : " << x << " et y : " << y << endl ;
}
point::~point()
{cout << "Destruction de l'objet en x : " << x << " et y : " << y << endl ;
}

void point::fonction_copie_test(point p)
{ cout << "La copie a fonctionné" << endl ;
}
