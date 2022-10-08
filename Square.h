#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(double a, double b, double c, double d, double A, double B, double C, double D) : Square(a, b, c, d, A, B, C, D, true) {};

	std::string getName() override;

protected:
	Square(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};

