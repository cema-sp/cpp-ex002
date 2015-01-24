#include <iostream>
#include "complex.h"

Complex operator+(Complex a, Complex b) { return a+=b; }
Complex operator-(Complex a, Complex b) { return a-=b; }
Complex operator*(Complex a, Complex b) { return a*=b; }
Complex operator/(Complex a, Complex b) { return a/=b; }

// unary minus
Complex operator-(Complex a) { return { -a.real(), -a.imag() }; }

bool operator==(Complex a, Complex b)
{
  return a.real() == b.real() && a.imag() == b.imag();
}
bool operator!=(Complex a, Complex b)
{
  return !(a==b);
}
std::ostream& operator<<(std::ostream& out, Complex z)
{
  out << "(" << z.real() << ", " << z.imag() << "i)";
  return out;
}
