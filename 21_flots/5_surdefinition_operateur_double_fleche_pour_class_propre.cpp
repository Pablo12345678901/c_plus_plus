#include <iostream>
#include <iomanip>
using namespace std;

class point
{   public :
        point(int abs=0, int ord=0) : x(abs), y(ord) {cout << "Constr. point en : " << x << " " << y << endl;}
        void setX(int abs) { x = abs ;} // fonction pour assigner une valeur à x depuis le flot
        void setY(int ord) { y = ord ;} // fonction pour assigner une valeur à y depuis le flot
        int abscisse() { return x ;} // Fonction pour sortie de boucle si x = 0
        friend istream & operator >> (istream & entree,point &p) ; // surdéfinition de l'opérateur >> pour la class point
        friend ostream & operator << (ostream & sortie, const point &p) ; // surdéfinition de l'opérateur << pour la class point
    private :
        int x, y ;
} ;

int main()
{   const short TAILLE = 121 ;
    char ligne[TAILLE] ;
    point a(12, 25), b ;
    cout << "Point a : " << a << ", b : " << b << endl ; // montre que l'affichage d'une class via un flot fonctionne
    cout << "Condition de sortie : donner un point dont le x = 0." << endl ;
    do
    {   cout << "Donnez un point : " ;
        if (cin >> a) cout << "Merci pour le point : " << a << endl ;
        else 
        {   cin.clear() ; // mise à 0 du statut d'erreur
            cin.getline(ligne, TAILLE-1, '\n') ; // récupération de la ligne dans mon tableau (max 120 char)
        }

    } while (a.abscisse()) ; // condition de sortie de la boucle si le point possède sa coordonnée x = 0
    cout << "Vous avez fourni un point dont le x = 0, ce qui signifie que vous souhaitez sortir du programme." << endl ;
    cout << "Fin du programme." << endl ;
}
istream & operator >> (istream & entree, point &p)
{   bool ok = true ;
    int x, y ;
    char carac = '\0' ; // définition à un caractère improbable
    entree >> carac ;
    if (carac!='<') ok = false ;
    else
    {   if(!(entree >> x)) ok = false ;
        else
            {   entree >> carac ;
                if (carac!=',') ok = false ;
                else
                    {   if(!(entree >> y)) ok = false ;
                        else
                            {   entree >> carac ;
                                if (carac!='>') ok = false ;
                            }
                    }
            }
    }
    if (ok) {p.setX(x) ; p.setY(y) ;} // Affectation que si tout est ok dans la lecture

    else entree.clear(ios::badbit | entree.rdstate()) ; // à clarifier ce que cela fait
    // ios::badbit -> Active le badbit : je force la génération d'une erreur si le format n'est pas celui attendu.
    // entree.rdstate() -> Retourne l'état actuel d'erreur après avoir enclenché badbit - sans modifier les autres bits.
    return entree ;
}
ostream & operator << (ostream & sortie, const point &p)
{   sortie << "<" << p.x << "," << p.y << ">" ;
    return sortie ;
}