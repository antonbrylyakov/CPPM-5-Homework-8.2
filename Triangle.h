#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(double a, double b, double c, double A, double B, double C);

	double geta();

	double getb();

	double getc();

	double getA();

	double getB();

	double getC();

protected:
	void printSideInfo() override;

	void printAngleInfo() override;

private:
	double _a, _b, _c, _A, _B, _C;
};
