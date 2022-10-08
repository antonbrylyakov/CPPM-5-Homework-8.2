#pragma once
#include <stdexcept>


class InvalidFigure : public std::domain_error
{
public:
	InvalidFigure(const char* message);
	InvalidFigure(std::string& message);
};

