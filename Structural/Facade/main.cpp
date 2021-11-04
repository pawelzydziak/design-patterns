#include <iostream>
#include "Facade.h"

int main()
{
	auto *system1 = new ComplicatedSystem1;
	auto *system2 = new ComplicatedSystem2;

	auto *facade = new Facade(system1, system2);

	std::cout << facade->FacadeOperation();
	return 0;
}
