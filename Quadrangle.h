#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) :Quadrangle(a, b, c, d, A, B, C, D, true) {};

	double geta();

	double getb();

	double getc();

	double getd();

	double getA();

	double getB();

	double getC();

	double getD();

	std::string getName() override;

	std::string getFigureCreationReport() override;

protected:
	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D, bool throwIfNotValid);

	virtual std::string getSideAndAngleSummary() override;

	std::string formatErrorReport(std::string& name, std::string& summary, std::string& reason) override;

	bool validate(std::string& reason) override;

private:
	double _a, _b, _c, _d, _A, _B, _C, _D;
};


