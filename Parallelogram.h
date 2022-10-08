#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Parallelogram(a, b, c, d, A, B, C, D, true) {};

	std::string getName() override;

protected:
	Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};

