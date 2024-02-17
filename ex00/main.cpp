#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arg" << std::endl;
		return (0);
	}
	{
		// std::cout << "Static class method Test" << std::endl;
		// std::isnan()はc++11のため、"+nan"や"-nan"は"nan"と表示させる". 
		std::cout << ">>> argv[1] = " << argv[1] << " <<<" << std::endl;
		ScalarConverter::convert(argv[1]);
	}
	return (0);
}

// #include <libc.h>
// __attribute__((destructor))
// static void destructor() {
// std::cout << "\n";
// system("leaks -q convert");
// }
