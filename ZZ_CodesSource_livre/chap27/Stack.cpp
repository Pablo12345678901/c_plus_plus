// Stack
#include <iostream>
#include <stack>
#include <vector>
using namespace std ;
int main()
{ stack<int, vector<int> > q ;
  cout << "taille initiale  : " << q.size() << endl ;
  for (int i=0 ; i<10 ; i++) q.push(i*i) ;
  cout << "taille apres for  : " << q.size() << endl  ;
  cout << "sommet de la pile : " << q.top()  << endl ;
  q.top() = 99 ;   /* on modifie le sommet de la pile */
  cout << "on depile : " ;
  for (int i=0 ; i<10 ; i++)  { cout << q.top() << " " ; q.pop() ; }
}