class Vector
{
public:
  Vector(int sz);
  double& operator[](int);
  int size();
private:
  double* elem;
  int sz;  
};
