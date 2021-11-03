#include <iostream>
#include "SubClass.h"
#include "concreteAlgo2.h"

int main()
{
	SuperClass superClassInstance{};
	superClassInstance.setAlgo(new concreteAlgo);
	std::cout << superClassInstance.doAlgo() << std::endl;

	superClassInstance.setAlgo(new concreteAlgo2);
	std::cout << superClassInstance.doAlgo() << std::endl;

	SubClass subClassInstance{};
	subClassInstance.setAlgo(new concreteAlgo);
	subClassInstance.innerValue = subClassInstance.doAlgo();

	std::cout << subClassInstance.innerValue;

	return 0;
}
