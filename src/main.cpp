#include <iostream>
#include <cmath>
#include "vector.h"
#include "complex.h"

double sqrt_sum(Vector& v)
{
  double sum = 0;
  for (int i = 0; i < v.size(); ++i)
  {
    sum += std::sqrt(v[i]);
  }
  return sum;
}

int main()
{
  Vector v {0,1,2,3,4};

  std::cout << "SQRT = ";
  std::cout << sqrt_sum(v) << std::endl;

  Complex a{1,2};
  Complex b{1.5, 5.5};

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "a + b = " << (a + b) << std::endl;
  std::cout << "a * b = " << (a * b) << std::endl;
  std::cout << "a / b = " << (a / b) << std::endl;
  
  return 0;
}
