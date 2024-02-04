#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	{
		std::cout << "Static class method Test" << std::endl;
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
	return 0;
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q serialize");
}
