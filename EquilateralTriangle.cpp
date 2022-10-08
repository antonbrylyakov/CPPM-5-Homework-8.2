#include "EquilateralTriangle.h"
#include "InvalidFigure.h"

EquilateralTriangle::EquilateralTriangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid) : IsoScelesTriangle(a, b, c, A, B, C, false)
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

std::string EquilateralTriangle::getName()
{
	return "Равносторонний треугольник";
}

bool EquilateralTriangle::validate(std::string& reason)
{
	// базовая проверка для равнобедренного треугольника - сумма углов, стороны a, c и углы A, C.
	if (!IsoScelesTriangle::validate(reason))
	{
		return false;
	}

	// Новая проверка для равностороннего треугольника.
	if (geta() != getb())
	{
		reason = "Стороны a и b не равны";
		return false;
	}

	// Новая проверка для равностороннего треугольника.
	if (getA() != getB())
	{
		reason = "Углы A и B не равны";
		return false;
	}

	return true;
}