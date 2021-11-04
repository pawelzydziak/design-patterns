#include <iostream>
#include "concretePrototype.h"
#include "SubPrototype.h"
int main()
{
	concretePrototype cP(2137);
	std::cout << cP.getValue() << std::endl;

	auto c = cP.clone();
	std::cout << c->getValue() << std::endl;

	return 0;
}
