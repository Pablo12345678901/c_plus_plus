// GeneOperateursConteneurs
#include <iostream>
#include <vector>
using namespace std ;
class point
{ public :
    point(int abs=0, int ord=0) : x(abs), y(ord) { }
    friend int operator== (const point &, const point &) ;
    friend int operator< (const point &, const point &) ;
    friend int operator> (const point &, const point &) ;   /* superflu    */
                                        /* pour la comparaison de vecteurs */
  private :
    int x, y ;
} ;
int operator== (const point & a,const point &b)
{ return ( (a.x == b.x) && (a.y == b.y) ) ;
}
int operator<(const point & a, const point & b)
{ return ( (a.x < b.x) && (a.y < b.y) ) ;
}
int operator>(const point & a, const point & b)  // ici, definition
{ cout << "--Appel de operators >\n" ;           // non coherente avec celle de <
  return ( (a.x > b.x) && (a.y > b.y) ) ;
}

int main()
{ vector<point> v1, v2 ;
  point p1 (1, 2), p2 (2, 3), p3(3, 4), p4(4, 8) ;
  v1.push_back(p1) ; v1.push_back(p2) ; v1.push_back(p3) ;
  v2.push_back(p4) ;
  cout << "v1 == v2 : " << (v1==v2) << "    v1 != v2 : " << (v1!=v2) << endl ;
  cout << "v1 < v2  : " << (v1<v2)  << "    v1 <= v2 : " << (v1<=v2) << endl ;
  cout << "v1 > v2  : " << (v1>v2)  << "    v1 >= v2 : " << (v1>=v2) << endl ;
  cout << "p1 < p2  : " << (p1<p2) << endl ;
  cout << "p1 > p2  : " << (p1>p2) << endl ;
  // cout << (p1<=p2) ;   // rejete en compilation
}