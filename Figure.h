#pragma once
#include <iostream>

class Figure
{
public:
	Figure() : Figure(true) {};

	virtual std::string getName();

	unsigned int getSideCount();

	virtual std::string getFigureCreationReport();

protected:
	unsigned int _sideCount = 0;

	Figure(bool throwIfInvalid);

	virtual std::string getSideAndAngleSummary();

	virtual std::string formatErrorReport(std::string& name, std::string& summary, std::string& reason);

	virtual bool validate(std::string& reason);
};