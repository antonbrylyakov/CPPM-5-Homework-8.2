#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram
{
public:
	Rhombus(double a, double A, double B) : Rhombus(a, A, B, true) {};

	std::string getName() override;

protected:
	Rhombus(double a, double A, double B, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};

