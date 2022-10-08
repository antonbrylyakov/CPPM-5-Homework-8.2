#include "Rectangle.h"
#include "InvalidFigure.h"

Rectangle::Rectangle(double a, double b) : Parallelogram(a, b, 90, 90)
{
	_name = "Прямоугольник";
}

void Rectangle::validate()
{
	if (getA() != 90)
	{
		std::string message = getErrorReport("Угол A не равен 90");
		throw InvalidFigure(message);
	}

	if (getB() != 90)
	{
		std::string message = getErrorReport("Угол B не равен 90");
		throw InvalidFigure(message);
	}

	if (getC() != 90)
	{
		std::string message = getErrorReport("Угол C не равен 90");
		throw InvalidFigure(message);
	}

	if (getD() != 90)
	{
		std::string message = getErrorReport("Угол D не равен 90");
		throw InvalidFigure(message);
	}

	Parallelogram::validate();
}