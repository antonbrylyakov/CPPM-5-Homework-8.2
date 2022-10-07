#include "Quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
{
	_a = a;
	_b = b;
	_c = c;
	_d = d;
	_A = A;
	_B = B;
	_C = C;
	_D = D;
	_name = "Четырехугольник";
	_sideCount = 4;
}

double Quadrangle::geta()
{
	return _a;
}

double Quadrangle::getb()
{
	return _b;
}

double Quadrangle::getc()
{
	return _c;
}

double Quadrangle::getd()
{
	return _d;
}

double Quadrangle::getA()
{
	return _A;
}

double Quadrangle::getB()
{
	return _B;
}

double Quadrangle::getC()
{
	return _C;
}

double Quadrangle::getD()
{
	return _D;
}

void Quadrangle::printSideInfo()
{
	std::cout << "Стороны: ";
	std::cout << "a = " << geta() << ", ";
	std::cout << "b = " << getb() << ", ";
	std::cout << "c = " << getc() << ", ";
	std::cout << "d = " << getd() << std::endl;
}

void Quadrangle::printAngleInfo()
{
	std::cout << "Углы: ";
	std::cout << "A = " << getA() << ", ";
	std::cout << "B = " << getB() << ", ";
	std::cout << "C = " << getC() << ", ";
	std::cout << "D = " << getD() << std::endl;
}
