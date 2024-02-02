#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "ScalarConverter : Default constructor called" << RESET << std::endl;
}

void ScalarConverter::convert(std::string arg)
{
	setChar(arg);
	setInt(arg);
	setFloat(arg);
	setDouble(arg);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << GREEN << "ScalarConverter : Destructor called" << RESET << std::endl;	
}

ScalarConverter::ScalarConverter(ScalarConverter const& x)
{
	std::cout << GREEN << "ScalarConverter : Copy constructor called" << RESET << std::endl;
	*this = x;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& x)
{
	std::cout << GREEN << "ScalarConverter : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		_c = x._c;
		_i = x._i;
		_f = x._f;
		_d = x._d;
	}
	return (*this);		
}

char const& ScalarConverter::getChar(void) const {return _c;}

int const& ScalarConverter::getInt(void) const {return _i;}

float const& ScalarConverter::getFloat(void) const {return _f;}

double const& ScalarConverter::getDouble(void) const {return _d;}

void ScalarConverter::setChar(std::string str)
{
	_c = *str.c_str();
}

void ScalarConverter::setInt(std::string str)
{
	_i = std::stoi(str);
}

void ScalarConverter::setFloat(std::string str)
{
	_f = std::stof(str);
}

void ScalarConverter::setDouble(std::string str)
{
	_d = std::stod(str);
}

std::ostream& operator<<(std::ostream& os, ScalarConverter const& ref)
{
	os << ">>>" << std::endl;
	os << "char: " << ref.getChar() << std::endl;
	os << "int: " << ref.getInt() << std::endl;
	os << "float: " << ref.getFloat() << std::endl;
	os << "double: " << ref.getDouble() << std::endl;
	os << "<<<";
	return os;
}
