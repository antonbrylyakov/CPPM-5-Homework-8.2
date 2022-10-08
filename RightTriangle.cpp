#include "RightTriangle.h"
#include "InvalidFigure.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90)
{
	_name = "Прямоугольный треугольник";
	validate();
}

void RightTriangle::validate()
{
	// базовая проверка для треугольника - сумма углов.
	Triangle::validate();

	// Новая проверка для прямоугольного треугольника.
	if (getC() != 90)
	{
		std::string message = getErrorReport("Угол C не равен 90");
		throw InvalidFigure(message);
	}
}