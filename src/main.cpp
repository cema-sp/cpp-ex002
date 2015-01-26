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
  Vector v1 {0,1,2,3,4};
  Vector v2 = v1;
  v1[4] = 5;
  v2.push_back(6);

  std::cout << v1 << std::endl;
  std::cout << v2 << std::endl;
  std::cout << "SQRT = ";
  std::cout << sqrt_sum(v1) << std::endl;

  Complex a{1,2};
  Complex b{1.5, 5.5};

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "a + b = " << (a + b) << std::endl;
  std::cout << "a * b = " << (a * b) << std::endl;
  std::cout << "a / b = " << (a / b) << std::endl;
  
  return 0;
}
