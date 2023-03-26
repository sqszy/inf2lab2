#include <iostream>
#include "Header.h"

Attributes::Attributes() {} //Конструктор без аргументов

Attributes::Attributes(double r, double i) //Конструктор со списком инициализации и значением по умолчанию
	:real(r), imag(i) {}



Complex::Complex() //Конструктор без аргументов
{
	cin >> number;
}
Complex::Complex(double real, double imag)
	:number(Attributes(real, imag)) {}

//Методы
Complex Complex::plus(const Complex& attrib)
{
	double RealNum = number.real + attrib.number.real;
	double ImagNum = number.imag + attrib.number.imag;
	return Complex(RealNum, ImagNum);
}
Complex Complex::multiply(const Complex& attrib)
{
	double Real = number.real * attrib.number.real - number.imag * attrib.number.imag;
	double Imag = number.real * attrib.number.imag + number.imag * attrib.number.real;
	return Complex(Real, Imag);
}

//Перегруженные методы
Complex Complex::operator+(const Complex& attrib)
{
	return plus(attrib);
}
Complex Complex::operator*(const Complex& attrib)
{
	return multiply(attrib);
}
void Complex::getComplex() //Вывод 
{
	cout << number;
}

//Перегруженные ввод/вывод
ostream& operator<< (ostream& out, const Attributes& attrib)
{
	return out << "(" << attrib.real << ", " << attrib.imag << "i)" << endl;
}
istream& operator>> (istream& in, Attributes& attrib)
{
	cout << "Enter a real part of complex number: ";
	in >> attrib.real;
	cout << "Enter a imaginary part of complex number: ";
	in >> attrib.imag;
	return in;
}

