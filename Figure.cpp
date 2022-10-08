#include "Figure.h"
#include "InvalidFigure.h"

Figure::Figure()
{
	_name = "Фигура";
	_sideCount = 0;
	validate();
}

std::string& Figure::getName()
{
	return _name;
}

unsigned int Figure::getSideCount()
{
	return _sideCount;
}

std::string Figure::getFigureCreationReport()
{
	std::string res = getFigureSummary() + "создана.";
	return res;
}

std::string Figure::getSideAndAngleSummary()
{
	std::string res = "";
	return res;
}

std::string Figure::getFigureSummary()
{
	std::string res = getName() + " " + getSideAndAngleSummary();
	return res;
}

std::string Figure::getErrorReport(std::string& reason)
{
	std::string res = getFigureSummary() + " не создана. Причина: " + reason;
	return res;
}

std::string Figure::getErrorReport(const char* reason)
{
	std::string res = getFigureSummary() + " не создана. Причина: " + reason;
	return res;
}

void Figure::validate()
{
	if (_sideCount != 0)
	{
		std::string message = getErrorReport("Количество сторон не равно нулю");
		throw InvalidFigure(message);
	}
}