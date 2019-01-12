#pragma once
class complex {
private:
	double re;
	double im;
public:
void add(complex);
void multiply(complex);
void abs();
complex();
complex(const complex&);
};