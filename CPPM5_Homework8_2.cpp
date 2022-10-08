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
		IsoScelesTriangle f(10, 20, 30, 100, 40, 45);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Parallelogram f(10, 20, 10, 20, 70, 110, 70, 110);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Rhombus f(20, 20, 20, 20, 15, 165, 15, 165);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Square f(10, 20, 10, 10, 90, 90, 90, 90);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		RightTriangle f(10, 20, 30, 20, 80, 80);
		std::cout << f.getFigureCreationReport() << std::endl;
	}
	catch (InvalidFigure& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
