#pragma once
#include "IsoScelesTriangle.h"

class EquilateralTriangle : public IsoScelesTriangle
{
public:
	EquilateralTriangle(double a) : EquilateralTriangle(a, true) {};

	std::string getName() override;

protected:
	EquilateralTriangle(double a, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};
