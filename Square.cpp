#include "Square.h"
#include "InvalidFigure.h"

Square::Square(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid) : Rectangle(a, b, c, d, A, B, C, D, false)
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

std::string Square::getName()
{
	return "Квадрат";
}

bool Square::validate(std::string& reason)
{
	if (!Rectangle::validate(reason))
	{
		return false;
	}

	if (geta() != getb())
	{
		reason = "Стороны a и b равны";
		return false;
	}

	if (getc() != getd())
	{
		reason = "Стороны c и d равны";
		return false;
	}

	return true;
}