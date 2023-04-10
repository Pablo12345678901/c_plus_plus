#include <iostream>
#include <memory>
using namespace std ;

class point
{   public :
        point(int val_x=0, int val_y=0) : adr(make_unique<int[]>(2)) {adr[0]=val_x ; adr[1]=val_y ; cout << "Point créé en x y " << adr[0] << " " << adr[1] << " et coordonnées à l'adresse : " << adr << endl ;}
        point(point &p) : adr(make_unique<int[]>(2))// constructeur de recopie
        {
            for (int i=0; i<2; i++) adr[i] = p.adr[i] ;
            cout << "Point copié en x y " << adr[0] << " " << adr[1] << " et coordonnées à l'adresse : " << adr << endl ;
        }
        ~point() {cout << "Point Détruit en x y " << adr[0] << " " << adr[1] << endl ;}
        unique_ptr<int[]> adr ;
    private :
        //int x, y ;
        
        
} ;
class cercle
{   public :
        cercle(int val_x=0, int val_y=0, int val_r=1) : centre(val_x, val_y), adr(make_unique<int>(val_r))
        { cout << "Cercle crée de rayon " << *adr << " (rayon situé en : " << adr << ") et de centre x y " << val_x << " " << val_y << endl ; }
        cercle(cercle &c) : centre(c.centre), adr(make_unique<int>(*(c.adr)))// constructeur de recopie
        { cout << "Cercle copié de rayon " << *adr << " (rayon situé en : " << adr << ") et de centre x y " << this->centre.adr[0] << " " << this->centre.adr[1] << endl ; }
        ~cercle() { cout << "Cercle détruit de rayon " << *adr << endl ; } ;
    private :
        point centre ;
        unique_ptr<int> adr ;
        

} ;
void fonction_copie(cercle c) ; // prototype
int main()
{
    // VALEURS DE TESTS
    cercle c1 ;
    fonction_copie(c1) ;
    cout << "Hors fonction..." << endl ;
    cout << endl ;
    cercle c2(4) ;
    fonction_copie(c2) ;
    cout << "Hors fonction..." << endl ;
    cout << endl ;
    cercle c3(6, 7) ;
    fonction_copie(c3) ;
    cout << "Hors fonction..." << endl ;
    cout << endl ;
    cercle c4(1, 2, 5) ;
    fonction_copie(c4) ;
    cout << "Hors fonction..." << endl ;
    cout << endl ;
    cout << "Destruction finale à la sortie du main..." << endl ;
}

void fonction_copie(cercle c)
{ cout << "Fonction..." << endl ;}