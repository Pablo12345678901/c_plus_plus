// Sommeil
#include<iostream>
#include <thread>
#include <chrono>
using namespace std ;
void ecrit (string ch, int n, int ms)
 { for (int i = 0 ; i<n ; i++)
    { cout << ch ;
      this_thread::sleep_for (chrono::milliseconds(ms)) ;
    }
 }
int main()
{  thread t1 (ecrit, "Bonjour ", 15, 10);
   thread t2 (ecrit, "Bonsoir ", 10, 15) ;
   thread t3 (ecrit, "\n",        8, 20) ;
   t1.join() ;
   t2.join() ;
   t3.join() ;
}