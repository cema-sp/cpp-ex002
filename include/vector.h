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
  Vector(const Vector&);
  ~Vector() { delete[] elem; }
  double& operator[](int);
  Vector& operator=(const Vector&);
  Vector& push_back(double);
  int size() const;
};

std::ostream& operator<<(std::ostream& out, Vector&);
