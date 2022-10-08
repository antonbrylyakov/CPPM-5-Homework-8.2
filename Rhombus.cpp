#include "Rhombus.h"
#include "InvalidFigure.h"

Rhombus::Rhombus(double a, double A, double B) : Parallelogram(a, a, A, B)
{
	_name = "Ромб";
}

void Rhombus::validate()
{
	Parallelogram::validate();

	if (geta() != getb())
	{
		std::string message = getErrorReport("Стороны a и b равны");
		throw InvalidFigure(message);
	}

	if (getc() != getd())
	{
		std::string message = getErrorReport("Стороны c и d равны");
		throw InvalidFigure(message);
	}
}