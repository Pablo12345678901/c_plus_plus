// BaseNum
#include <iostream>
using namespace std ;
int main()
{  int n = 12000 ;
   cout << "par defaut     : "        << n << endl ;
   cout << "en hexadecimal : " << hex << n << endl ;
   cout << "en decimal     : " << dec << n << endl ;
   cout << "en octal       : " << oct << n << endl ;
   cout << "et ensuite     : "        << n << endl ;

   bool ok = 1 ;   // ou ok = true 
   cout << "par defaut       : "                << ok << endl ;
   cout << "avec noboolalpha : " << noboolalpha << ok << endl ;
   cout << "avec boolalpha   : " << boolalpha   << ok << endl ;
   cout << "et ensuite       : "                << ok << endl ;
}