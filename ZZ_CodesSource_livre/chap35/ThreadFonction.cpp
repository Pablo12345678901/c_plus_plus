// ThreadFonction
#include <iostream>
#include <thread>
using namespace std ;
void ecritBonjour()
 { for (int i = 0 ; i<12 ; i++) cout << "bonjour " ; }
void ecritBonsoir()
 { for (int i = 0 ; i<10 ; i++) cout << "bonsoir " ; }
void ecritLigne()
 { for (int i = 0 ; i<6 ; i++)  cout << endl ;       }
int main()
{  thread t1 (ecritBonjour) ;
   thread t2 (ecritBonsoir) ;
   thread t3 (ecritLigne) ;
   t1.join() ; t2.join() ; t3.join() ;
}