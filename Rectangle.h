#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	Rectangle(double a, double b) : Rectangle(a, b, true) {};

	std::string getName() override;

protected:
	Rectangle(double a, double b, bool throwIfNotValid);

	bool validate(std::string& reason) override;
};
