#pragma once
#include "IsoScelesTriangle.h"

class EquilateralTriangle : public IsoScelesTriangle
{
public:
	EquilateralTriangle(double a, double b, double c, double A, double B, double C) : EquilateralTriangle(a, b, c, A, B, C, true) {};

	std::string getName() override;

protected:

	EquilateralTriangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};
