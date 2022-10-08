#include "Quadrangle.h"
#include <sstream>
#include "InvalidFigure.h"

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
	validate();
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

std::string Quadrangle::getFigureCreationReport()
{
	std::string res = getFigureSummary() + " создан.";
	return res;
}

std::string Quadrangle::getSideAndAngleSummary()
{
	std::ostringstream oss;
	oss << "(стороны "
		<< geta()
		<< ", "
		<< getb()
		<< ", "
		<< getc()
		<< ", "
		<< getd()
		<< "; Углы "
		<< getA()
		<< ", "
		<< getB()
		<< ", "
		<< getC()
		<< ", "
		<< getD()
		<< ")";

	return oss.str();
}

std::string Quadrangle::getErrorReport(std::string& reason)
{
	std::string res = getFigureSummary() + " не создан. Причина: " + reason;
	return res;
}

std::string Quadrangle::getErrorReport(const char* reason)
{
	std::string res = getFigureSummary() + " не создан. Причина: " + reason;
	return res;
}

void Quadrangle::validate()
{
	if (getSideCount() != 4)
	{
		std::string message = getErrorReport("Количество сторон не равно 4");
		throw InvalidFigure(message);
	}

	if (getA() + getB() + getC() + getD() != 360)
	{
		std::string message = getErrorReport("Сумма углов не равна 360");
		throw InvalidFigure(message);
	}
}
