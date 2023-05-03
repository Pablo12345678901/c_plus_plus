// Queue
#include <iostream>
#include <queue>
#include <deque>
using namespace std ;
int main()
{ queue<int, deque<int> > q ;
  for (int i=0 ; i<10 ; i++) q.push(i*i) ;
  cout << "tete de la queue : " << q.front() << endl ;
  cout << "fin de la queue : "  << q.back()  << endl ;
  q.front() = 99 ;    /* on modifie la tete de la queue */
  q.back()  = -99 ;   /* on modifie la fin de la queue  */
  cout << "on depile la queue : " ;
  for (int i=0 ; i<10 ; i++)
  { cout << q.front() << " " ; q.pop() ;
  }
}