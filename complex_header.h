#include <iostream>
class Complex {
        private:
                double real, imag;
        public:
                Complex() {}
                Complex(const double x, const double y) { real=x; imag=y;}
                Complex(const Complex& c) { real = c.getReal(); imag = c.getImag(); }
                void setReal(double num) { real = num;  }
                void setImag(double num) { imag = num;  }
                double getReal() const {return real;}
                double getImag() const {return imag;}
                void conjugate();
		double magnitude();
		double phase();  

		Complex& operator=(const Complex c);
		Complex operator+(Complex& c) const;  
		Complex operator-(Complex& c) const;
		Complex operator*(Complex& c) const;
		Complex operator/(Complex& c) const;
		friend std::ostream& operator<<(std::ostream& os, Complex& c);
		friend std::istream& operator>>(std::istream& os, Complex& c);
};

