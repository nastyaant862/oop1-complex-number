#include "Complex.h"
#include <iostream>
using namespace std;

void Complex::print() {
	string sign = (this->im >= 0) ? "+" : "";
	cout << this->re << sign << this->im << "i" << endl;
}

Complex Complex::Sum(Complex n) {
	return Complex ( this->re + n.re, this->im + n.im );
}

Complex Complex::Subtract(Complex n) {
	return Complex{ this->re - n.re, this->im - n.im };
}

Complex Complex::Multi(Complex n) {
	return Complex{ this->re * n.re + (-1)* this->im * n.im, this->re*n.im + this->im*n.re };
}

Complex Complex::Devision(Complex n) {
	double ch_re, ch_im, zn;
	ch_re = this->re * n.re + this->im * (-n.im) * (-1);
	ch_im = this->re * (-n.im) + this->im * n.re;
	zn = n.re * n.re + n.im * n.im;
	return Complex{ ch_re/zn, ch_im/zn };
}

double Complex::Module() {
	return (sqrt(pow(this->re, 2) + pow(this->im, 2)));
}

