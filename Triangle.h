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

	std::string getFigureCreationReport() override;

protected:

	virtual std::string getErrorReport(std::string& reason) override;

	virtual std::string getErrorReport(const char* reason) override;

	virtual std::string getSideAndAngleSummary() override;

	void validate() override;

private:
	double _a, _b, _c, _A, _B, _C;
};
