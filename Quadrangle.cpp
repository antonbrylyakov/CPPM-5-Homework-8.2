#include "Quadrangle.h"
#include <sstream>
#include "InvalidFigure.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid)
{
	_a = a;
	_b = b;
	_c = c;
	_d = d;
	_A = A;
	_B = B;
	_C = C;
	_D = D;
	_sideCount = 4;

	std::string reason;
	if (throwIfInvalid && !validate(reason))
	{
		std::string name = getName();
		std::string summary = getSideAndAngleSummary();
		std::string message = formatErrorReport(name, summary, reason);
		throw InvalidFigure(message);
	}
}

std::string Quadrangle::getName()
{
	return "Четырехугольник";
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
	std::string res = getName() + " " + getSideAndAngleSummary() + " создан.";
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

std::string Quadrangle::formatErrorReport(std::string& name, std::string& summary, std::string& reason)
{
	std::string res = name + " " + summary + " не создан. Причина: " + reason;
	return res;
}

bool Quadrangle::validate(std::string& reason)
{
	if (getSideCount() != 4)
	{
		reason = "Количество сторон не равно 4";
		return false;
	}

	if (getA() + getB() + getC() + getD() != 360)
	{
		reason = "Сумма углов не равна 360";
		return false;
	}

	return true;
}
