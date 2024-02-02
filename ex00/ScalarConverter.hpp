#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const&);
		ScalarConverter & operator=(ScalarConverter const&);

		// char const& getChar(void) const;
		// int const& getInt(void) const;
		// float const& getFloat(void) const;
		// double const& getDouble(void) const;

		// static void setChar(std::string);
		// static void setInt(std::string);
		// static void setFloat(std::string);
		// static void setDouble(std::string);

		static void convert(std::string const&);

	private:
		static char convertChar(std::string const&);
		static int convertInt(std::string const&);
		static float convertFloat(std::string const&);
		static double convertDouble(std::string const&);
		// static char _c ;
		// static int _i;
		// static float _f;
		// static double _d;
};

// std::ostream & operator<<(std::ostream &, ScalarConverter const&);
