// ExceptionDerivee1
#include <iostream>
#include <stdexcept>
using namespace std ;
class mon_exception_1 : public exception
{ public :
    mon_exception_1 () {}
    const char * what() const throw() { return "mon exception nummero 1" ; }
} ;
class mon_exception_2 : public exception
{ public :
    mon_exception_2 () {}
    const char * what() const throw() { return "mon exception nummero 2" ; }
} ;
int main()
{ try { cout << "bloc try 1\n" ; throw mon_exception_1() ; }
  catch (exception & e) { cout << "exception : " << e.what() << endl ; }
  try { cout << "bloc try 2\n" ; throw mon_exception_2() ;
      }
  catch (exception & e) { cout << "exception : " << e.what() << endl ;
  }
}