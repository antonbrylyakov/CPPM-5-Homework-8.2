#include "Square.h"
#include "InvalidFigure.h"

Square::Square(double a) : Rectangle(a, a)
{
	_name = "Квадрат";
}

void Square::validate()
{
	Rectangle::validate();

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