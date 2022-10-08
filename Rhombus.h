#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram
{
public:
	Rhombus(double a, double b, double c, double d, double A, double B, double C, double D) : Rhombus(a, b, c, d, A, B, C, D, true) {};

	std::string getName() override;

protected:
	Rhombus(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};

