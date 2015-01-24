#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

double sqrt_sum(Vector& v)
{
  double sum = 0;
  for (int i = 0; i < v.size(); ++i)
  {
    sum += sqrt(v[i]);
  }
  return sum;
}

int main(int argc, char const *argv[])
{
  Vector v(5);
  v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  v[3] = 3;
  v[4] = 4;

  cout << "SQRT = ";
  cout << sqrt_sum(v) << endl;
  
  return 0;
}
