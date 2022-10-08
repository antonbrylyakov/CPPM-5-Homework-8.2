#include "Rectangle.h"
#include "InvalidFigure.h"

Rectangle::Rectangle(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid) : Parallelogram(a, b, c, d, A, B, C, D, false)
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

std::string Rectangle::getName()
{
	return "Прямоугольник";
}

bool Rectangle::validate(std::string& reason)
{
	if (getA() != 90)
	{
		reason = "Угол A не равен 90";
		return false;
	}

	if (getB() != 90)
	{
		reason = "Угол B не равен 90";
		return false;
	}

	if (getC() != 90)
	{
		reason = "Угол C не равен 90";
		return false;
	}

	if (getD() != 90)
	{
		reason = "Угол D не равен 90";
		return false;
	}

	if (!Parallelogram::validate(reason))
	{
		return false;
	}

	return true;
}