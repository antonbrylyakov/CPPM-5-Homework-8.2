#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
	_a = a;
	_b = b;
	_c = c;
	_A = A;
	_B = B;
	_C = C;
	_name = "Треугольник";
	_sideCount = 3;
}

double Triangle::geta()
{
	return _a;
}

double Triangle::getb()
{
	return _b;
}

double Triangle::getc()
{
	return _c;
}

double Triangle::getA()
{
	return _A;
}

double Triangle::getB()
{
	return _B;
}

double Triangle::getC()
{
	return _C;
}

void Triangle::printSideInfo()
{
	std::cout << "Стороны: ";
	std::cout << "a = " << geta() << ", ";
	std::cout << "b = " << getb() << ", ";
	std::cout << "c = " << getc() << std::endl;
}

void Triangle::printAngleInfo()
{
	std::cout << "Углы: ";
	std::cout << "A = " << getA() << ", ";
	std::cout << "B = " << getB() << ", ";
	std::cout << "C = " << getC() << std::endl;
}
