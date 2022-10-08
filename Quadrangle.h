#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

	double geta();

	double getb();

	double getc();

	double getd();

	double getA();

	double getB();

	double getC();

	double getD();

	std::string getFigureCreationReport() override;

protected:

	virtual std::string getErrorReport(std::string& reason) override;

	virtual std::string getErrorReport(const char* reason) override;

	virtual std::string getSideAndAngleSummary() override;

	void validate() override;

private:
	double _a, _b, _c, _d, _A, _B, _C, _D;
};


