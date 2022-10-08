#include "RightTriangle.h"
#include "InvalidFigure.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid) : Triangle(a, b, c, A, B, C, false)
{
	std::string reason;
	if (throwIfInvalid && !validate(reason))
	{
		std::string name = getName();
		std::string summary = getSideAndAngleSummary();
		std::string message = formatErrorReport(name, summary, reason);
		throw InvalidFigure(message);
	}
}

std::string RightTriangle::getName()
{
	return "Прямоугольный треугольник";
}

bool RightTriangle::validate(std::string& reason)
{
	// базовая проверка для треугольника - сумма углов.
	if (!Triangle::validate(reason))
	{
		return false;
	}

	// Новая проверка для прямоугольного треугольника.
	if (getC() != 90)
	{
		reason = "Угол C не равен 90";
		return false;
	}

	return true;
}