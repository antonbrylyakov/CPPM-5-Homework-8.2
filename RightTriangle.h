#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:
	RightTriangle(double a, double b, double c, double A, double B, double C) : RightTriangle(a, b, c, A, B, C, true) {};

	std::string getName() override;

protected:
	RightTriangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};