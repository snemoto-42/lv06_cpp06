#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string const& str)
{
	convertChar(str);
	convertInt(str);
	convertFloat(str);
	convertDouble(str);
}

void ScalarConverter::convertChar(std::string const& str)
{
	try
	{
		char c = static_cast<char>(std::stoi(str));
		if (31 < c && c < 127)
			std::cout << "char: " << "'" << c << "'" << std::endl;
		else
			std::cout << "char: " << GREEN << "Non displayable" << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: " << RED << "impossible" << RESET << std::endl;
	}
}

void ScalarConverter::convertInt(std::string const& str)
{
	try
	{
		int i = std::stoi(str);
		std::cout << "int: " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int: " << RED << "impossible" << RESET << std::endl;
	}	
}

void ScalarConverter::convertFloat(std::string const& str)
{
	try
	{
		float f = std::stof(str);
		std::string sign = "";
		if (f == std::numeric_limits<float>::infinity())
			sign = "+";
		std::string prec = "";
		if (f - std::floor(f) == 0)
			prec = ".0";
		std::cout << "float: " << sign << f << prec << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float: " << RED << "impossible" << RESET << std::endl;
	}	
}

void ScalarConverter::convertDouble(std::string const& str)
{
	try
	{
		double d = std::stod(str);
		std::string sign = "";
		if (d == std::numeric_limits<double>::infinity())
			sign = "+";
		std::string prec = "";
		if (d - std::floor(d) == 0)
			prec = ".0";
		std::cout << "double: " << sign << d << prec << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double: " << RED << "impossible" << RESET << std::endl;	
	}	
}

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << GREEN << "Destructor called" << RESET << std::endl;	
}

ScalarConverter::ScalarConverter(ScalarConverter const& x)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = x;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& x)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		*this = x;
	}
	return (*this);		
}
