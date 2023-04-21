#include <iostream>
#include <cstdlib> // pour fonction "exit"
using namespace std ;

class vect
{   public :
        vect(int nb) ;
        ~vect() ;
        int & operator [] (int i) ;
    private :
        int nbelem ;
        int * adr ;
} ;
class vect_limite
{   public :
        vect_limite(int nb, int max, int min) : i(nb), maximum(max), minimum(min) {}
        int i, maximum, minimum ;
} ;
class vect_creation
{   public :
        vect_creation(int nb) : nbel(nb) {}
        int nbel ;
} ;

int main()
{   try
    {   //vect v(-1) ; // erreur : vecteur avec nb élément négatif
        //vect v(0) ; // erreur : vecteur avec nb élément nul
        vect v(5) ; // ok = bon fonctionnement
        //v[5] ; // erreur : indice hors range
        //v[-1] ; // erreur : indice hors range
        //v[0] ; // ok = bon fonctionnement
        v[3] ; // ok = bon fonctionnement
    }
    catch (vect_limite l)
    {   cout << "Exception vect_limite" << endl ;
        cout << "L'indice " << l.i << " est en dehors de l'intervalle : " << l.maximum << " > NB > " << l.minimum << endl ;
        exit(-1) ;
    }
    catch (vect_creation c)
    {   cout << "Exception vect_creation" << endl ;
        if (c.nbel < 0) cout << "Un vecteur ne peut avoir avoir un nb d'élément négatifs : " << c.nbel << endl ;
        else cout << "Un vecteur ne peut avoir avoir un nb d'élément nul : " << c.nbel << endl ;
        exit(-1) ;
    }
}
// méthode de la class vect
vect::vect(int nb)
{   if (nb<=0)
    {   vect_creation c(nb) ;
        throw c ;
    }
    adr = new int[nbelem = nb] ;
    cout << "Constr. vect de " << nbelem << " situé en " << adr << endl ;
}
vect::~vect()
{   delete [] adr ;
    adr = nullptr ;
    cout << "Destr. vect" << endl ;
}
int & vect::operator [] (int i)
{   if (i<0 || i>=nbelem) 
    {   vect_limite l(i, nbelem-1, 0) ;
        throw l;
    }
    return adr[i] ;
}