#include "Triangle.h"
#include "InvalidFigure.h"
#include <sstream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid)
{
	_a = a;
	_b = b;
	_c = c;
	_A = A;
	_B = B;
	_C = C;
	_sideCount = 3;

	std::string reason;
	if (throwIfInvalid && !validate(reason))
	{
		std::string name = getName();
		std::string summary = getSideAndAngleSummary();
		std::string message = formatErrorReport(name, summary, reason);
		throw InvalidFigure(message);
	}
}

std::string Triangle::getName()
{
	return "Треугольник";
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
	std::string res = getName() + " " + getSideAndAngleSummary() + " создан.";
	return res;
}

std::string Triangle::formatErrorReport(std::string& name, std::string& summary, std::string& reason)
{
	std::string res = name + " " + summary + " не создан. Причина: " + reason;
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

bool Triangle::validate(std::string& reason)
{
	if (getSideCount() != 3)
	{
		reason = "Количество сторон не равно 3";
		return false;
	}

	if (getA() + getB() + getC() != 180)
	{
		reason = "Сумма углов не равна 180";
		return false;
	}

	return true;
}
