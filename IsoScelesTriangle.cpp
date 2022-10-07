#include "IsoScelesTriangle.h"

IsoScelesTriangle::IsoScelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A)
{
	_name = "Равнобедренный треугольник";
}