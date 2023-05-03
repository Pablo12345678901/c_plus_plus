// LectureChainesC
#include <iostream>
using namespace std ;
int main()
{  char nom [20], prenom [20], ville [25] ;
   cout << "quelle est votre ville : " ;
   cin >> ville ;
   cout << "donnez votre nom et votre prenom : " ;
   cin >> nom >> prenom ;
   cout << "bonjour cher " << prenom << " "<< nom <<  " qui habitez a " << ville ;
}