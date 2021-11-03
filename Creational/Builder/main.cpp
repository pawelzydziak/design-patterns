#include <iostream>
#include "ConcreteBuilder.h"

int main()
{
	auto *builder = new ConcreteBuilder();

	builder->addElement("Hello Agent");
	builder->addAnotherElement(47);
	auto p = builder->getResult();
	p->listElements();

	delete p;
	delete builder;

	return 0;
}
