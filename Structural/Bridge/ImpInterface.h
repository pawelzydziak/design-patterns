#ifndef DESIGN_PATERNS_IMPINTERFACE_H
#define DESIGN_PATERNS_IMPINTERFACE_H


#include "Abstraction.h"

class ImpInterface : public Abstraction
{
public:
	virtual void implementationInterfaceFunctionality() = 0;
};


#endif //DESIGN_PATERNS_IMPINTERFACE_H
