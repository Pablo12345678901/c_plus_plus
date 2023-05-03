// Priority_queue
#include <iostream>
#include <queue>
#include <deque>
using namespace std ;
int main()
{ priority_queue <int, deque<int>, greater<int> > q ;
  q.push (10) ; q.push(5) ; q.push(12) ; q.push(8) ;
  cout << "tete de la queue : " << q.top() << endl ;
  cout << "on depile : " ;
  for (int i=0 ; i<4 ; i++) { cout << q.top() << " " ; q.pop() ;
                        }
}