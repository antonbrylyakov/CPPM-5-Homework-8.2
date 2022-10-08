#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:
	RightTriangle(double a, double b, double c, double A, double B) : RightTriangle(a, b, c, A, B, true) {};

	std::string getName() override;

protected:
	RightTriangle(double a, double b, double c, double A, double B, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};