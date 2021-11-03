#ifndef DESIGN_PATERNS_NICEIMPLEMENTATION_H
#define DESIGN_PATERNS_NICEIMPLEMENTATION_H

#include "ImpInterface.h"
#include "Bridge.h"

class niceImplementation : public ImpInterface
{
public:
	void implementationInterfaceFunctionality() override
	{
		std::cout << "Hello its very nice to meet you" << std::endl;
	}

	void abstractFunctionality() override
	{
		std::cout << "Nice :)" << std::endl;
		this->implementationInterfaceFunctionality();
	};
};


#endif //DESIGN_PATERNS_NICEIMPLEMENTATION_H
