#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	if (!ptr)
		throw std::invalid_argument("Received NULL pointer");
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	if (!raw)
		throw std::invalid_argument("Received NULL pointer");
	return reinterpret_cast<Data*>(raw);
}

Serializer::Serializer()
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Serializer::~Serializer()
{
	std::cout << GREEN << "Destructor called" << RESET << std::endl;	
}

Serializer::Serializer(Serializer const& x)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = x;
}

Serializer& Serializer::operator=(Serializer const& x)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	if (this != &x)
	{
		*this = x;
	}
	return (*this);		
}
