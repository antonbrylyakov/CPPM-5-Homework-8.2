#include "IsoScelesTriangle.h"
#include "InvalidFigure.h"

IsoScelesTriangle::IsoScelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
{
	_name = "Равнобедренный треугольник";
}

void IsoScelesTriangle::validate()
{
	// базовая проверка для треугольника - сумма углов.
	Triangle::validate();

	// Новая проверка для равнобедренного треугольника.
	if (geta() != getc())
	{
		std::string message = getErrorReport("Стороны a и c не равны");
		throw InvalidFigure(message);
	}

	// Новая проверка для равнобедренного треугольника.
	if (getA() != getC())
	{
		std::string message = getErrorReport("Углы A и C не равны");
		throw InvalidFigure(message);
	}
}