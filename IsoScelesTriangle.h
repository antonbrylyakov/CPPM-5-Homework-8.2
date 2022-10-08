#pragma once
#include "Triangle.h"

class IsoScelesTriangle : public Triangle
{
public:
	IsoScelesTriangle(double a, double b, double c, double A, double B, double C) : IsoScelesTriangle(a, b, c, A, B, C, true) {};

	std::string getName() override;

protected:
	IsoScelesTriangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};
