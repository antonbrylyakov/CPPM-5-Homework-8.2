#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double a) : IsoScelesTriangle(a, a, 60, 60)
{
	_name = "Равносторонний треугольник";
}