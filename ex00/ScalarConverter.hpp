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

		char const& getChar(void) const;
		int const& getInt(void) const;
		float const& getFloat(void) const;
		double const& getDouble(void) const;

		void setChar(std::string);
		void setInt(std::string);
		void setFloat(std::string);
		void setDouble(std::string);

		void convert(std::string);

	private:
		char _c;
		int _i;
		float _f;
		double _d;
};

std::ostream & operator<<(std::ostream &, ScalarConverter const&);
