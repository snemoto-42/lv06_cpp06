#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arg" << std::endl;
		return (0);
	}
	{
		std::cout << "Static class method Test" << std::endl;
		ScalarConverter::convert(argv[1]);
	}
	return (0);
}
