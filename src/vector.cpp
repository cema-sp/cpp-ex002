#include <stdexcept>
#include "vector.h"

Vector::Vector() { Vector(0); }
Vector::Vector(int s)
  :elem{ new double[s] }, sz{s}
  {
    for (int i = 0; i != s; ++i)
    {
      elem[i] = 0;
    }
  }
Vector::Vector(std::initializer_list<double> lst)
  :elem{ new double[lst.size()] }, sz{ static_cast<int>(lst.size()) }
  {
    std::copy(lst.begin(), lst.end(), elem);
  }

Vector::~Vector() { delete[] elem; }

double& Vector::operator[](int i)
{
  if (i < 0 || i >= size())
  {
    throw std::out_of_range{"Vector::operator[]"};
  }
  return elem[i];
}
// void Vector::push_back(double d)
// {
//   elem[sz] = d;
//   sz++;
// }
int Vector::size() const
{
  return sz;
}
