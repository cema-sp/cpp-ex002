#include "container.h"

class Vector : public Container
{
private:
  double* elem;
  int sz;
public:
  Vector();
  Vector(int sz);
  Vector(std::initializer_list<double>);
  ~Vector();
  double& operator[](int);
  // void push_back(double);
  int size() const;
};
