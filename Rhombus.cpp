#include "Rhombus.h"
#include "InvalidFigure.h"

Rhombus::Rhombus(double a, double A, double B, bool throwIfInvalid) : Parallelogram(a, a, A, B, false)
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

std::string Rhombus::getName()
{
	return "Ромб";
}

bool Rhombus::validate(std::string& reason)
{
	if (!Parallelogram::validate(reason))
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