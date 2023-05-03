//SharedPtrAffect
#include <iostream>
#include <memory>
using namespace std;
int main()
{ auto sp1 = make_shared<int> (10) ;
  cout << "--- En I,   sp1 = " << sp1.get() << " *sp1 = " << *sp1
       << " compteur = " << sp1.use_count() << endl ;
  auto sp2 = make_shared<int> (20) ;
  cout << "--- En II,  sp2 = " << sp2.get() << " *sp2 = " << *sp1
       << " compteur = " << sp2.use_count() << endl ;
  shared_ptr<int> sp3 (sp1) ;
  cout << "--- En III, sp1 = " << sp1.get() << " *sp1 = " << *sp1
       << " compteur = " << sp1.use_count() << endl ;
  cout << "--- En III, sp2 = " << sp2.get() << " *sp2 = " << *sp2
       << " compteur = " << sp2.use_count() << endl ;
  cout << "--- En III, sp3 = " << sp3.get() << " *sp3 = " << *sp3
       << " compteur = " << sp3.use_count() << endl ;
  sp1 = sp2 ;
  cout << "--- En IV,  sp1 = " << sp1.get() << " *sp1 = " << *sp1
       << " compteur = " << sp1.use_count() << endl ;
  cout << "--- En IV,  sp2 = " << sp2.get() << " *sp2 = " << *sp2
       << " compteur = " << sp2.use_count() << endl ;
  cout << "--- En IV,  sp3 = " << sp3.get() << " *sp3 = " << *sp3
       << " compteur = " << sp3.use_count() << endl ;
  sp1 = nullptr ;  // ou ad1.reset()
  cout << "--- En V,   sp1 = " << sp1.get() << endl ;
  cout << "--- En V,   sp2 = " << sp2.get() << " *sp2 = " << *sp2
       << " compteur = " << sp2.use_count() << endl ;
 }