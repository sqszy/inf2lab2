#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Complex c1;
	Complex c2{ 2.0, 3.0 };
	Complex c3{ 4.0 };

	c1.getComplex();
	c2.getComplex();
	c3.getComplex();

	c3 = c1 + c2;
	c3.getComplex();

	Complex c4 = c1 * c2;
	c4.getComplex();

	return 0;
}
