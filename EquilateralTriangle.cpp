#include "EquilateralTriangle.h"
#include "InvalidFigure.h"

EquilateralTriangle::EquilateralTriangle(double a) : IsoScelesTriangle(a, a, 60, 60)
{
	_name = "Равносторонний треугольник";
	validate();
}

void EquilateralTriangle::validate()
{
	// базовая проверка для равнобедренного треугольника - сумма углов, стороны a, c и углы A, C.
	IsoScelesTriangle::validate();

	// Новая проверка для равностороннего треугольника.
	if (geta() != getb())
	{
		std::string message = getErrorReport("Стороны a и b не равны");
		throw InvalidFigure(message);
	}

	// Новая проверка для равностороннего треугольника.
	if (getA() != getB())
	{
		std::string message = getErrorReport("Углы A и B не равны");
		throw InvalidFigure(message);
	}
}