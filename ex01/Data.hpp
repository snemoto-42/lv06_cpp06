#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>

class Data
{
	public:
		Data(int, std::string, double);
		~Data();
		Data(Data const&);
		Data & operator=(Data const&);

	private:
		int _id;
		std::string _name;
		double _value;

		Data();
};
