#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string const& str)
{
	try
	{
		char c = convertChar(str);
		int i = convertInt(str);
		float f = convertFloat(str);
		double d = convertDouble(str);

		std::cout << "char: " << "'" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

char ScalarConverter::convertChar(std::string const& str)
{
	return static_cast<char>(std::stoi(str));
}

int ScalarConverter::convertInt(std::string const& str)
{
	return std::stoi(str);
}

float ScalarConverter::convertFloat(std::string const& str)
{
	return std::stof(str);
}

double ScalarConverter::convertDouble(std::string const& str)
{
	return std::stod(str);
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
