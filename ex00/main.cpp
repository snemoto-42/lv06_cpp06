#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arg" << std::endl;
		return (0);
	}
	{
		std::cout << "Static method Test" << std::endl;
		ScalarConverter::convert(argv[1]);
	}
	// {
	// 	std::cout << "Normal Test" << std::endl;
	// 	ScalarConverter c;
	// 	c.convert(argv[1]);
	// 	std::cout << c << std::endl;

	// 	std::cout << "Copy assignment test" << std::endl;
	// 	ScalarConverter d;
	// 	d = c;
	// 	std::cout << d << std::endl;

	// 	std::cout << "Copy constructor test" << std::endl;
	// 	ScalarConverter e(c);
	// 	std::cout << e << std::endl;
	// }
	return (0);
}
