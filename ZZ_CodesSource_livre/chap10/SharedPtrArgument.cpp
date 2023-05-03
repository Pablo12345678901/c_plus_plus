//SharedPtrArgument
#include <iostream>
#include <memory>
using namespace std;
void f (shared_ptr<int> sp)
{ cout << "--- Dans f,  sp = " << sp.get() << "  *sp = " << *sp 
       << " compteur = " << sp.use_count() << endl ;
  (*sp) += 12 ;
}
int main()
{ auto sp1 = make_shared<int> (10) ;
  cout << "--- En I,   sp1 = " << sp1.get() << " *sp1 = " << *sp1 
       << " compteur = " << sp1.use_count() << endl ;
  f (sp1) ;
  cout << "--- En II,  sp1 = " << sp1.get() << " *sp1 = " << *sp1 
       << " compteur = " << sp1.use_count() << endl ;
}