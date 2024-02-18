#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	try
	{
		std::cout << ">>> Static class method Test <<<" << std::endl;
		Data* originalPtr = new Data(1, "TEST", 10.34);
		uintptr_t serializedValue = Serializer::serialize(originalPtr);
		Data* deserializedValue = Serializer::deserialize(serializedValue);
		if (originalPtr == deserializedValue)
		{
			std::cout << "the same pointer" << std::endl;
			std::cout << "originalPtr : " << originalPtr << std::endl;
			std::cout << "deserializedValue : " << deserializedValue << std::endl;
		}
		else
			std::cout << "These are different pointer" << std::endl;
		delete originalPtr;
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << ">>> NULL Test for serialize <<<" << std::endl;
		Serializer::serialize(NULL);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << ">>> NULL Test for deserialize <<<" << std::endl;
		Serializer::deserialize(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// try
	// {
	// 	std::cout << ">>> class Test <<<" << std::endl;
	// 	Data* originalPtr = new Data(0, "", 0);
	// 	delete originalPtr;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return 0;
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q serialize");
}
