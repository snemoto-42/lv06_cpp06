#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	std::time_t currentTime = std::time(NULL);
	std::srand(static_cast<unsigned int>(currentTime));
	int rnum = std::rand() % 3;
	// std::cout << "rnum : " << rnum << std::endl;
	switch(rnum)
	{
		case 0:
			return new A();
			break ;
		case 1:
			return new B();
			break ;
		case 2:
			return new C();
			break;
		default:
			return NULL;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast const&)
	{
		try
		{
			dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast const&)
		{
			try
			{
				dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast const&)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}		
	}
}

int main(void)
{
	{
		std::cout << "Random Test" << std::endl;
		Base* test = generate();
		if (!test)
			std::cerr << "srand() error" << std::endl;
		else
		{
			identify(test);
			identify(*test);
		}
		delete test;
	}
	return 0;
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q identify");
}
