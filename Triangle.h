#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C, true) {};

	double geta();

	double getb();

	double getc();

	double getA();

	double getB();

	double getC();

	std::string getName() override;

	std::string getFigureCreationReport() override;

protected:
	Triangle(double a, double b, double c, double A, double B, double C, bool throwIfInvalid);

	virtual std::string getSideAndAngleSummary() override;

	std::string formatErrorReport(std::string& name, std::string& summary, std::string& reason) override;

	bool validate(std::string& reason) override;

private:
	double _a, _b, _c, _A, _B, _C;
};
