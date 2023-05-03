// FonctMembreStat
#include <iostream>
using namespace std ;
class cpte_obj
{ public : 
   cpte_obj () ;     
   ~cpte_obj() ;   
   static void compte () ;   // pour afficher le nombre d’objets crees
  private :
   static int ctr ;          // compteur (statique) du nombre d’objets crees
} ;
int cpte_obj::ctr = 0 ;      // initialisation du membre statique ctr
cpte_obj::cpte_obj ()        // constructeur
{  cout << "++ construction : il y a maintenant   " << ++ctr << " objets\n" ; }
cpte_obj::~cpte_obj ()       // destructeur
{  cout << "-- destruction  : il reste maintenant " << --ctr << " objets\n" ; }
void cpte_obj::compte () 
{  cout << "   appel compte : il y a              " << ctr   << " objets\n" ; }
void fct () ;
int main()
{  cpte_obj::compte () ;     // appel de la fonction membre statique compte
                             // alors qu’aucun objet de sa classe n’existe   
   cpte_obj a ;
   cpte_obj::compte () ;
   fct () ;
   cpte_obj::compte () ;
   cpte_obj b ;
   cpte_obj::compte () ;
}
void fct()
{  cpte_obj u, v ; } 