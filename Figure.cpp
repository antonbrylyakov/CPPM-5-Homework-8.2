#include "Figure.h"
#include "InvalidFigure.h"

Figure::Figure(bool throwIfInvalid)
{
	_sideCount = 0;
	std::string reason;
	if (throwIfInvalid && !validate(reason))
	{
		std::string name = getName();
		std::string summary = getSideAndAngleSummary();
		std::string message = formatErrorReport(name, summary, reason);
		throw InvalidFigure(message);
	}
}

std::string Figure::getName()
{
	return "Фигура";
}

unsigned int Figure::getSideCount()
{
	return _sideCount;
}

std::string Figure::getFigureCreationReport()
{
	std::string res = getName() + " " + getSideAndAngleSummary() + " создана.";
	return res;
}

std::string Figure::getSideAndAngleSummary()
{
	std::string res = "";
	return res;
}

std::string Figure::formatErrorReport(std::string& name, std::string& summary, std::string& reason)
{
	std::string res = name + " " + summary + " не создана. Причина: " + reason;
	return res;
}

bool Figure::validate(std::string& reason)
{
	if (_sideCount != 0)
	{
		reason = "Количество сторон не равно нулю";
		return false;
	}

	return true;
}