#include <iostream>
#include <thread>
#include <memory>
using namespace std ;

void ft(exception_ptr & err)
// à tester
{   cout << "Lancement exception int depuis ft\n" ;
    try
    {   throw(5) ; // déclenche une exception de type int (5)
    }
    //catch(double n) // déclencherait la fonction "terminate" si l'exception
    //déclenchée dans un thread n'est pas catch par le même thread
    catch(const int & n)
    {   cout << "Catch exception dans ft - on positionne err\n" ;
        err = current_exception() ; // assigne à err la valeur de l'exception
    }
}

int main()
{
    try
    {   exception_ptr err = nullptr ;
        thread t1(ft, ref(err)) ; // err est transmis par pointeur ici car la fonction le demande tel quel
        t1.join() ;
        if (err) // si err a été modifié avec la valeur de l'exception
        {   cout << "Dans main err est non nul\n" ;
            rethrow_exception(err) ; // transmets l'exception au thread de main
        }
    }
    catch (int n)
    {   cout << "Catch exception int dans main - valeur = " << n << endl ;
    }
    cout << "Fin du programme." << endl ;
}