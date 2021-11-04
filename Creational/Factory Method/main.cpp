#include <iostream>
#include "Creator.h"
#include "concreteCreatorA.h"
#include "concreteCreatorB.h"

int main()
{
	Creator *creator = new concreteCreatorA;
	std::cout << creator->importantOperation() << std::endl;
	delete creator;

	creator = new concreteCreatorB;
	std::cout << creator->importantOperation() << std::endl;
	delete creator;

	return 0;
}
