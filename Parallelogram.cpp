#include "Parallelogram.h"
#include "InvalidFigure.h"

Parallelogram::Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid) : Quadrangle(a, b, c, d, A, B, C, D, false)
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

std::string Parallelogram::getName()
{
	return "Паралелограмм";
}

bool Parallelogram::validate(std::string& reason)
{
	// валидируем суму углов
	if (!Quadrangle::validate(reason))
	{
		return false;
	}

	if (geta() != getc())
	{
		reason = "Стороны a и c не равны";
		return false;
	}

	if (getb() != getd())
	{
		reason = "Стороны b и d не равны";
		return false;
	}

	if (getA() != getC())
	{
		reason = "Углы A и C не равны";
		return false;
	}

	if (getB() != getD())
	{
		reason = "Углы B и D не равны";
		return false;
	}

	return true;
}