#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

class Convert
{
	public:
		Convert(std::string);
		~Convert();
		Convert(Convert const&);
		Convert & operator=(Convert const&);

		std::string const& getArg(void) const;
		char const& getChar(void) const;
		int const& getInt(void) const;
		float const& getFloat(void) const;
		double const& getDouble(void) const;

		void setChar(void);
		void setInt(void);
		void setFloat(void);
		void setDouble(void);

	private:
		std::string _arg;
		char _c;
		int _i;
		float _f;
		double _d;
};

std::ostream & operator<<(std::ostream &, Convert const&);
