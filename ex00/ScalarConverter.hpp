#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include <cmath>
#include <limits>

class ScalarConverter
{
	public:
		static void convert(std::string const&);

	private:
		static void convertChar(std::string const&);
		static void convertInt(std::string const&);
		static void convertFloat(std::string const&);
		static void convertDouble(std::string const&);

		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const&);
		ScalarConverter & operator=(ScalarConverter const&);
};
