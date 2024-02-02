#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arg" << std::endl;
		return (0);
	}
	Convert c(argv[1]);
	std::cout << c << std::endl;
	return (0);
}
