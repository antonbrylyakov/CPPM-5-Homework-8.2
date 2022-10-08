#pragma once
#include <iostream>

class Figure
{
public:
	Figure();

	std::string& getName();

	unsigned int getSideCount();

	virtual std::string getFigureCreationReport();

protected:
	std::string _name;
	unsigned int _sideCount = 0;

	virtual std::string getErrorReport(std::string& reason);

	virtual std::string getErrorReport(const char* reason);

	virtual std::string getFigureSummary();

	virtual std::string getSideAndAngleSummary();

	// метод валидации фигуры, который будет генерировать исключения.
	// Если вызываем в конструкторе, то нужно вызывать в каждом конструкторе наследников, 
	// т.к. конструктор базового класса не вызывает реализацию наследников
	virtual void validate();
};