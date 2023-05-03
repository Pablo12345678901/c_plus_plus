// CompteObj
#include <iostream>
using namespace std ;
class cpte_obj
{ public :
   cpte_obj () ;
   ~cpte_obj () ;
   private :
    static int ctr ;     // compteur du nombre d’objets crees
} ;
int cpte_obj::ctr = 0 ;  // initialisation du membre statique ctr
cpte_obj::cpte_obj ()    // constructeur
{ cout << "++ construction : il y a maintenant   " << ++ctr << " objets\n" ; }
cpte_obj::~cpte_obj ()   // destructeur
{ cout << "-- destruction  : il reste maintenant " << --ctr << " objets\n" ; }
void fct() ;
int main()
{ cpte_obj a ;
  fct () ;
  cpte_obj b ;
}
void fct ()
{ cpte_obj u, v ; }