#include <iostream>
using namespace std;

// un appel d'un argument de fonction mère dans la fonction fille sera :
//      en normal : toujours converti en une lvalue
//      en forward : conserve le même type (lvalue ou rvalue) que dans la fonction mère
//      en move : toujours converti en rvalue

void f(int &nb) ;
void f(int &&nb) ;
template <class T> void g(T&&nb)
{   cout << "Normal : " ; f(nb) ;
    cout << "Forward : " ; f(forward<T>(nb)) ; // retransmets le même type (lvalue ou rvalue) que l'argument de la fonction "mère"
    cout << "Move : " ; f(move(nb)) ;
}

int main()
{
    int n = 5 ;
    cout << "Appel avec une lvalue..." << endl ;
    g(n) ;
    cout << endl ;
    cout << "Appel avec une rvalue..." << endl ; // qui est une copie d'une constante
    g(5) ;
    cout << endl ;
}
void f(int &nb)
{   cout << "Appel avec une lvalue." << endl ;
}
void f(int &&nb)
{   cout << "Appel avec une rvalue." << endl ;
}
