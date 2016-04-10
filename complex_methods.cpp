#include "complex_header.h"
#include <cmath>
using namespace std;

void Complex::conjugate() {imag = -imag;}

double Complex::magnitude() { return sqrt(real*real + imag*imag); }

double Complex::phase() { 
	try {
		if (imag==0)
			throw imag;
		return atan(real/imag);  
	}
	catch(double imag) {
		return imag;
	}
}

Complex& Complex::operator=(const Complex c) {
        this->real = c.getReal();
        this->imag = c.getImag();
	return (*this);
}

Complex Complex::operator+(Complex& c) const { 
	Complex t;
	t.setReal(real + c.getReal()); 
	t.setImag(imag + c.getImag());
	return t;
}

Complex Complex::operator-(Complex& c) const {
	Complex t;
	t.setReal(real - c.getReal());
	t.setImag(imag - c.getImag());
	return t;
}

Complex Complex::operator*(Complex& c) const {
	Complex t;
	t.setReal(real * c.getReal() - imag * c.getImag());
	t.setImag(real * c.getImag() + imag * c.getReal());
	return t;
}

Complex Complex::operator/(Complex& c) const {
	try {
		if (c.magnitude() == 0) {
			throw 0;
		}
		else {
			Complex t;
			t.setReal( (real * c.getReal() + imag * c.getImag()) / pow( c.magnitude(),2 ) );
			t.setImag( (imag * c.getReal() - real * c.getImag() ) / pow( c.magnitude(),2 ) );
			return t;
		}
	}
	catch (int a) {
		cout << "Error : Division by zero" << endl;
	}
}

std::ostream& operator<<(std::ostream& os, Complex& c) {
	if (c.getImag() < 0)
		os << c.getReal() << c.getImag() << "i";
	else
		os << c.getReal() << "+"  << c.getImag() << "i";
	return os;
}

std::istream& operator>>(std::istream& os, Complex& c) {
	double c_real, c_imag;
	os >> c_real >> c_imag;
	c.setReal(c_real);
	c.setImag(c_imag);
	return os;
}
