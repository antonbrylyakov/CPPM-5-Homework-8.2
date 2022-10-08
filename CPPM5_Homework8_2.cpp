#include <iostream>

#include "EquilateralTriangle.h"
#include "Figure.h"
#include "IsoScelesTriangle.h"
#include "Parallelogram.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "RightTriangle.h"
#include "Square.h"
#include "Triangle.h"
#include "InvalidFigure.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		Triangle f1(10, 20, 30, 100, 40, 40);
		std::cout << f1.getFigureCreationReport() << std::endl;

		IsoScelesTriangle f2(10, 20, 20, 84);
		std::cout << f2.getFigureCreationReport() << std::endl;

		Rhombus f3(10, 20, 15);
		std::cout << f3.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
