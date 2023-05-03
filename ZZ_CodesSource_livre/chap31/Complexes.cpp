// Complexes
#include <iostream>
#include <complex>
using namespace std ;
int main()
{ complex<double> z1(1, 2), z2(2, 5), z, zr ;
  cout << "z1 : " << z1 << "  z2 : " << z2 << endl ;
  cout << "Re(z1)  : " << real(z1) << "  Im(z1) : " << imag(z1) << endl ;
  cout << "abs(z1) : " << abs(z1)  << " arg(z1) : " << arg(z1)  << endl ;
  cout << "conj(z1) : " << conj(z1) << endl ;
  cout << "z1 + z2 : " << (z1+z2) << "  z1*z2 : " << (z1*z2)
       << "  z1/z2 : " << (z1/z2) << endl ;

  complex<double> i(0, 1) ;   // on definit la constante i
  z = 1.0+i ;
  zr = exp(z) ;
  cout << "exp(1+i) : " << zr << "  exp(i) : " << exp(i) << endl ;
  zr = log(i) ;
  cout << "log(i) : " << zr << endl ;
  zr = log(1.0+i) ;
  cout << "log(1+i) : " << zr << endl ;
  
  double rho, theta, norme ;
  rho = abs(z) ; theta = arg(z) ; norme = norm(z) ;
  cout << "abs(1+i) : " << rho << "  arg(1+i) : " << theta
       << "  norm(1+i) : " << norme << endl ;
  double pi = 3.1415926535 ;
  cout << "cos(i) : " << cos(i) << "  sinh(pi*i): " << sinh(pi*i)
       << "  cosh(pi*i) : " << cosh(pi*i) << endl ;
  z = polar<double> (1, pi/4) ;
  cout << "polar (1, pi/4) : " << z << endl ;
}