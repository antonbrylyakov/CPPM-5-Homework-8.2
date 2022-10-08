#include "InvalidFigure.h"

InvalidFigure::InvalidFigure(const char* message) :std::domain_error(message) {}
InvalidFigure::InvalidFigure(std::string& message) :std::domain_error(message) {}
