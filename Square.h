#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(double a) : Square(a, true) {};

	std::string getName() override;

protected:
	Square(double a, bool throwIfInvalid);

	bool validate(std::string& reason) override;
};

