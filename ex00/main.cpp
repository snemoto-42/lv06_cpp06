#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arg" << std::endl;
		return (0);
	}
	ScalarConverter c;
	c.convert(argv[1]);
	std::cout << c << std::endl;
	return (0);
}
