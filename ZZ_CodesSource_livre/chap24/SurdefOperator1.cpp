// SurdefOperator<<
#include <iostream>
using namespace std ;
class point
{ public :
   point (int abs=0, int ord=0) : x(abs), y(ord) { }
   int abscisse () { return x ; }
   void setX (int abs) {x = abs ; }
   void setY (int ord) {y = ord ; }
   friend ostream & operator << (ostream &, const point &) ;
   friend istream & operator >> (istream &, point &) ;
  private :
   int x, y ;
} ;
ostream & operator << (ostream & sortie, const point &p)
{ sortie << "<" << p.x << "," << p.y << ">" ;
  return sortie ;
}
istream & operator >> (istream & entree, point & p)
{  char c = '\0' ;
   int x, y ;
   bool ok = true ;
   entree >> c ;
   if (c != '<') ok = false ;
      else
       { entree >> x >> c ;
         if (c != ',') ok = false ;
            else
             { entree >> y >> c ;
               if (c != '>') ok = false ;
             }
       }
   if (ok) { p.setX (x) ; p.setY (y) ; }   // on n’affecte a p que si tout est OK
      else entree.clear (ios::badbit | entree.rdstate () ) ;
   return entree ;
}
int main()
{ char ligne [121] ;
  point a(2,3), b ;
  cout << "point a : " << a << "  point b : " << b << "\n" ;
  do { cout << "donnez un point : " ;
       if (cin >> a)  cout << "merci pour le point : " << a << endl ;
                      else { cout << "** information incorrecte \n" ;
                             cin.clear () ;
                             cin.getline (ligne, 120, '\n') ;
                           }
     }
  while ( a.abscisse () ) ;
}