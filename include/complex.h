class Complex
{
  double re, im;
public:
  Complex(double r, double i) :re{r}, im{i} {};
  Complex(double r) :re{r}, im{0} {};
  Complex() :re{0}, im{0} {};
  // ~Complex();

  double real() const { return re; }
  void real(double r) { re = r; }
  double imag() const { return im; }
  void imag(double i) { im = i; }

  Complex& operator+=(Complex z) { re += z.re; im += z.im; return *this; }
  Complex& operator-=(Complex z) { re -= z.re; im -= z.im; return *this; }
  Complex& operator*=(Complex);
  Complex& operator/=(Complex);
};

Complex operator+(Complex, Complex);
Complex operator-(Complex, Complex);
Complex operator*(Complex, Complex);
Complex operator/(Complex, Complex);
Complex operator-(Complex);

bool operator==(Complex, Complex);
bool operator!=(Complex, Complex);

std::ostream& operator<<(std::ostream& out, Complex);
