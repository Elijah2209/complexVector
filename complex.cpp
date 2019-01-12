#include"complex.h"
#include<iostream>

complex::complex(const complex& tmp) {
	re = tmp.re;
	im = tmp.im;
}
void complex::add(complex nom) {
	re = nom.re+re;
	im = nom.im+im;
}

void complex::multiply(complex nom) {
	re = nom.re*re;
	im = nom.im*im;
}

void complex::abs() {
	re = sqrt(re*re + im * im);
	im = 0;
}

complex::complex() {
	re = 5;
	im = 4;
}