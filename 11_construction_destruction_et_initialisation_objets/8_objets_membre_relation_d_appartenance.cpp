#include <iostream>
using namespace std ;

class point
{   public :
        point(int val_x=0, int val_y=0) : x(val_x), y(val_y) {cout << "Point crée en x y " << x << " " << y << endl ;}
        ~point() {cout << "Point Détruit en x y " << x << " " << y << endl ;} ;
    private :
        int x, y ;
        
} ;
class cercle
{   public :
        cercle(int val_x=0, int val_y=0, int val_r=1) : centre(val_x, val_y), rayon(val_r)
        { cout << "Cercle crée de rayon " << rayon << " et de centre x y " << val_x << " " << val_y << endl ; } ;
        ~cercle() { cout << "Cercle détruit de rayon " << rayon << endl ; } ;
    private :
        int rayon ;
        point centre ;

} ;
int main()
{
    // programme
    cercle c1 ;
    cercle c2(4) ;
    cercle c3(6, 7) ;
    cercle c4(1, 2, 5) ;
}