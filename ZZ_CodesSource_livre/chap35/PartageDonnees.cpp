// PartageDonnees
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
class nombres
{ public :
    mutex ver ;        // verrou ne pouvant être acquis que par un thread à la fois
    void calcul (int n)
    { for (int i =0 ; i<n ; i++ )
      { ver.lock () ;    // on acquiert le verrou pour cette partie de code critique
        nombre ++ ;
        carre = nombre * nombre ;
        ver.unlock () ;  // on le libEre ici
        this_thread::sleep_for (chrono::milliseconds(500)) ;
      }
    }
    void affiche (int n)
    { for (int i =0 ; i<n ; i++ )
      { ver.lock () ;   // on acquiert le verrou pour cette partie de code critique
        cout << nombre << " a pour carre " << carre << endl ;
        ver.unlock () ; // on le libere ici
        this_thread::sleep_for (chrono::milliseconds(700)) ;
      }
    }
  private :
    int nombre = 0, carre ;
} ;
int main()
{ nombres nomb ;
  cout << "-- Suite de carres \n" ;
  thread t1(&nombres::calcul, &nomb, 12) ;  // 10 calculs
  thread t2(&nombres::affiche, &nomb, 8) ;  // 15 affichages
  t1.join() ; t2.join() ;
  cout << "-- Fin programme \n " ;
}