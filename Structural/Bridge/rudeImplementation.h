#ifndef DESIGN_PATERNS_RUDEIMPLEMENTATION_H
#define DESIGN_PATERNS_RUDEIMPLEMENTATION_H

#include "ImpInterface.h"
#include "Bridge.h"

class rudeImplementation : public ImpInterface
{
public:
	void implementationInterfaceFunctionality() override
	{
		std::cout << "You? Ehh... What do you want?" << std::endl;
	}
	void abstractFunctionality() override
	{
		std::cout << "Rude >:(" << std::endl;
		this->implementationInterfaceFunctionality();
	};
};


#endif //DESIGN_PATERNS_RUDEIMPLEMENTATION_H
