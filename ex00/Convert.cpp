#include "Convert.hpp"

Convert::Convert(std::string arg):_arg(arg)
{
	std::cout << GREEN << "Convert : Default constructor called" << RESET << std::endl;
	setChar();
	setInt();
	setFloat();
	setDouble();
}

Convert::~Convert()
{
	std::cout << GREEN << "Convert : Destructor called" << RESET << std::endl;	
}

Convert::Convert(Convert const& x)
{
	std::cout << GREEN << "Convert : Copy constructor called" << RESET << std::endl;
	*this = x;
}

Convert& Convert::operator=(Convert const& x)
{
	std::cout << GREEN << "ShrubberyCreationForm : Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		_arg = x._arg;
	}
	return (*this);		
}

std::string const& Convert::getArg(void) const {return _arg;}

char const& Convert::getChar(void) const {return _c;}

int const& Convert::getInt(void) const {return _i;}

float const& Convert::getFloat(void) const {return _f;}

double const& Convert::getDouble(void) const {return _d;}

void Convert::setChar(void)
{
	_c = *_arg.c_str();
}

void Convert::setInt(void)
{
	_i = std::stoi(_arg);
}

void Convert::setFloat(void)
{
	_f = std::stof(_arg);
}

void Convert::setDouble(void)
{
	_d = std::stod(_arg);
}

std::ostream& operator<<(std::ostream& os, Convert const& ref)
{
	os << ">>>" << std::endl;
	os << "original arg: " << ref.getArg() << std::endl;
	os << "char: " << ref.getChar() << std::endl;
	os << "int: " << ref.getInt() << std::endl;
	os << "float: " << ref.getFloat() << std::endl;
	os << "double: " << ref.getDouble() << std::endl;
	os << "<<<";
	return os;
}
