// ThreadException
#include <iostream>
#include <thread>
#include <memory>
using namespace std;
void ft (exception_ptr * err)      // on pourrait utiliser & err
{ cout << "Lancement exception int depuis ft \n" ;
  try
  { throw (5) ;
  }
  catch (int n)
  { cout << "Catch exception dans ft - on positionne err\n" ;
    *err = current_exception() ;
  }
}
int main()
{ try 
  { exception_ptr err = nullptr ;
    thread t1 (ft, &err) ;    // on utiliserait ref(err) si err transmis par ref
    t1.join()   ;
    if (err) { cout << "Dans main err est non nul\n" ;
               rethrow_exception (err) ;  // cree l’exception referencee par err
             }
  }
  catch (int n)
  { cout << "Catch exception int dans main - valeur = " << n << endl ;
  }
}