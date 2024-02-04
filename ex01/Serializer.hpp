#pragma once

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include <iostream>
#include "Data.hpp"

class Data;

class Serializer
{
	public:
		static uintptr_t serialize(Data*);
		static Data* deserialize(uintptr_t);

	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const&);
		Serializer & operator=(Serializer const&);
};
