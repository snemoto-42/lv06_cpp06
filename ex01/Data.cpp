#include "Data.hpp"

Data::Data(int id, std::string name, double value):_id(id),_name(name),_value(value)
{
	std::cout << GREEN << "Data: " << "Constructor with argment called" << RESET << std::endl;
}

Data::Data()
{
	std::cout << GREEN << "Data: " << "Default constructor called" << RESET << std::endl;
}

Data::~Data()
{
	std::cout << GREEN << "Data: " << "Destructor called" << RESET << std::endl;	
}

Data::Data(Data const& x)
{
	std::cout << GREEN << "Data: " << "Copy constructor called" << RESET << std::endl;
	*this = x;
}

Data& Data::operator=(Data const& x)
{
	std::cout << GREEN << "Data: " << "Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		_id = x._id;
		_name = x._name;
		_value = x._value;
	}
	return (*this);		
}
