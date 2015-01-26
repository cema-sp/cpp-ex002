#include <stdexcept>
#include <iostream>
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

Vector::Vector(const Vector& v)
  :elem{ new double[v.size()] }, sz{ v.size() }
  {
    for(int i = 0; i != sz; ++i)
      elem[i] = v.elem[i];
  }

Vector& Vector::operator=(const Vector& v)
{
  double* p = new double[v.size()];
  for (int i = 0; i != v.size(); ++i)
    p[i] = v.elem[i];
  delete[] elem;
  elem = p;
  sz = v.size();
  return *this;
}

double& Vector::operator[](int i)
{
  if (i < 0 || i >= size())
  {
    throw std::out_of_range{"Vector::operator[]"};
  }
  return elem[i];
}
Vector& Vector::push_back(double d)
{
  double* p = new double[sz + 1];
  for (int i = 0; i < sz; ++i)
    p[i] = elem[i];
  delete[] elem;
  elem = p;
  elem[sz] = d;
  sz += 1;
  return *this;
}
int Vector::size() const
{
  return sz;
}

std::ostream& operator<<(std::ostream& out, Vector& v)
{
  out << "[";
  for (int i = 0; i < v.size() - 1 ; ++i)
  {
    out << v[i] << ", ";
  }
  out << v[v.size() - 1] << "]";
  return out;
}

