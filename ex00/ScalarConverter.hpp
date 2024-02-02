#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

class ScalarConverter
{
	public:
		static void convert(std::string const&);

	private:
		static char convertChar(std::string const&);
		static int convertInt(std::string const&);
		static float convertFloat(std::string const&);
		static double convertDouble(std::string const&);

		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const&);
		ScalarConverter & operator=(ScalarConverter const&);
};
