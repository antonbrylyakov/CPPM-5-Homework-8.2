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
		Triangle f(10, 20, 30, 100, 40, 45);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		IsoScelesTriangle f(10, 20, 20, 84);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Parallelogram f(20, 30, 70, 110);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Rhombus f(10, 20, 15);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Square f(40);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
