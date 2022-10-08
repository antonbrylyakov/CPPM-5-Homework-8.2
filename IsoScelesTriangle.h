#pragma once
#include "Triangle.h"

class IsoScelesTriangle : public Triangle
{
public:
	IsoScelesTriangle(double a, double b, double A, double B) : IsoScelesTriangle(a, b, A, B, true) {};

	std::string getName() override;

protected:
	IsoScelesTriangle(double a, double b, double A, double B, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};
