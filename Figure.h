#pragma once
#include <iostream>

class Figure
{
public:
	Figure();

	std::string& getName();

	unsigned int getSideCount();

	void printString();

protected:
	std::string _name;
	unsigned int _sideCount = 0;

	virtual void printSideInfo();

	virtual void printAngleInfo();
};