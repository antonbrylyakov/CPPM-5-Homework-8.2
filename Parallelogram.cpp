#include "Parallelogram.h"
#include "InvalidFigure.h"

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
{
	_name = "Паралелограмм";
}

void Parallelogram::validate()
{
	// валидируем суму углов
	Quadrangle::validate();

	if (geta() != getc())
	{
		std::string message = getErrorReport("Стороны a и c не равны");
		throw InvalidFigure(message);
	}

	if (getb() != getd())
	{
		std::string message = getErrorReport("Стороны b и d не равны");
		throw InvalidFigure(message);
	}

	if (getA() != getC())
	{
		std::string message = getErrorReport("Углы A и C не равны");
		throw InvalidFigure(message);
	}

	if (getB() != getD())
	{
		std::string message = getErrorReport("Углы B и D не равны");
		throw InvalidFigure(message);
	}
}