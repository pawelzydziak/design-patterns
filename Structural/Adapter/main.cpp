#include <iostream>
#include "TargetClass.h"
#include "Adaptee.h"
#include "Adapter.h"

int main()
{
	auto *targetClass = new TargetClass;
	std::cout << targetClass->request(369852) << std::endl;
	auto *adaptee = new Adaptee;
	std::cout << adaptee->aBitDifferentRequest(369852) << std::endl;
	auto *adapter = new Adapter(adaptee);
	std::cout << adapter->request(369852) << std::endl;
	return 0;
}
