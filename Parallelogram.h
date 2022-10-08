#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(double a, double b, double A, double B) : Parallelogram(a, b, A, B, true) {};

	std::string getName() override;

protected:
	Parallelogram(double a, double b, double A, double B, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};

