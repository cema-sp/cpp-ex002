#include <iostream>
#include "complex.h"

Complex& Complex::operator*=(Complex z)
{
  double re_new = re * z.real() - im * z.imag();
  im = re * z.imag() + im * z.real();
  re = re_new;
  return *this;
}
Complex& Complex::operator/=(Complex z)
{
  double d = z.real() * z.real() + z.imag() * z.imag();
  double re_new = re * z.real() + im * z.imag();
  re_new /= d;
  im = - re * z.imag() + im * z.real();
  im /= d;
  re = re_new;
  return *this;
}

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
