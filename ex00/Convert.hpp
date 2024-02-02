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

	private:
		std::string _arg;

};

std::ostream & operator<<(std::ostream &, Convert const&);
