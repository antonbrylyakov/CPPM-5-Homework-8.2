#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : Rectangle(a, b, c, d, A, B, C, D, true) {};

	std::string getName() override;

protected:
	Rectangle(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfNotValid);

	bool validate(std::string& reason) override;
};
