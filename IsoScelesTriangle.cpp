#include "IsoScelesTriangle.h"
#include "InvalidFigure.h"

IsoScelesTriangle::IsoScelesTriangle(double a, double b, double A, double B, bool throwIfInvalid) : Triangle(a, b, a, A, B, A, false)
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

std::string IsoScelesTriangle::getName()
{
	return "Равнобедренный треугольник";
}

bool IsoScelesTriangle::validate(std::string& reason)
{
	// базовая проверка для треугольника - сумма углов.
	if (Triangle::validate(reason))
	{
		return false;
	}

	// Новая проверка для равнобедренного треугольника.
	if (geta() != getc())
	{
		reason = "Стороны a и c не равны";
		return false;
	}

	// Новая проверка для равнобедренного треугольника.
	if (getA() != getC())
	{
		reason = "Углы A и C не равны";
		return false;
	}

	return true;
}