#include "Figure.h"

Figure::Figure()
{
	_name = "Фигура";
}

std::string& Figure::getName()
{
	return _name;
}

unsigned int Figure::getSideCount()
{
	return _sideCount;
}

void Figure::printString()
{
	std::cout << getName() << std::endl;
	printSideInfo();
	printAngleInfo();
	std::cout << std::endl;
}

void Figure::printSideInfo()
{

}

void Figure::printAngleInfo()
{

}