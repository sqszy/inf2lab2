#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

class Attributes
{
private:
	double real;
	double imag;

public:
	Attributes();
	Attributes(double r, double i);
	friend class Complex;
	friend ostream& operator<< (ostream& out, const Attributes& attr);
	friend istream& operator>> (istream& in, Attributes& attr);
};

class Complex
{
private:
	Attributes number;

public:
	Complex();
	Complex(double real, double imag = 0.0);


	//Методы
	Complex plus(const Complex& attrib);
	Complex multiply(const Complex& attrib);

	//Перегруженные методы
	Complex operator+(const Complex& attrib);
	Complex operator*(const Complex& attrib);

	//Вывод 
	void getComplex();
};
#endif // HEADER_H


