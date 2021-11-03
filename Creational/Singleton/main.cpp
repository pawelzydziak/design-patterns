#include <iostream>
#include "Singleton.h"


int main()
{
	auto single = Singleton::getInstance();
	std::cout << single->doSomething() << std::endl;
	return 0;
}
