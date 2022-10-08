#include "Triangle.h"
#include "InvalidFigure.h"
#include <sstream>

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
	validate();
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

std::string Triangle::getFigureCreationReport()
{
	std::string res = getFigureSummary() + " создан.";
	return res;
}

std::string Triangle::getSideAndAngleSummary()
{
	std::ostringstream oss;
	oss << "(стороны " 
		<< geta() 
		<< ", " 
		<< getb() 
		<< ", "
		<< getc()
		<< "; Углы "
		<< getA()
		<< ", "
		<< getB()
		<< ", "
		<< getC()
		<< ")";

	return oss.str();
}

std::string Triangle::getErrorReport(std::string& reason)
{
	std::string res = getFigureSummary() + " не создан. Причина: " + reason;
	return res;
}

std::string Triangle::getErrorReport(const char* reason)
{
	std::string res = getFigureSummary() + " не создан. Причина: " + reason;
	return res;
}

void Triangle::validate()
{
	if (getSideCount() != 3)
	{
		std::string message = getErrorReport("Количество сторон не равно 3");
		throw InvalidFigure(message);
	}

	if (getA() + getB() + getC() != 180)
	{
		std::string message = getErrorReport("Сумма углов не равна 180");
		throw InvalidFigure(message);
	}
}
