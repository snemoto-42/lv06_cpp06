#include "Convert.hpp"

Convert::Convert(std::string arg):_arg(arg)
{
	std::cout << GREEN << "Convert : Default constructor called" << RESET << std::endl;
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

std::ostream& operator<<(std::ostream& os, Convert const& ref)
{
	os << ">>>" << std::endl;
	os << "original arg: " << ref.getArg() << std::endl;
	os << "char: " << "xxx" << std::endl;
	os << "int: " << "xxx" << std::endl;
	os << "float: " << "xxx" << std::endl;
	os << "double: " << "xxx" << std::endl;
	os << "<<<";
	return os;
}
