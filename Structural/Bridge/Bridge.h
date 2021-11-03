#ifndef DESIGN_PATERNS_BRIDGE_H
#define DESIGN_PATERNS_BRIDGE_H


#include "Abstraction.h"
#include "ImpInterface.h"

class Bridge : public Abstraction
{
protected:
	ImpInterface *impInterface;
public:

	explicit Bridge(ImpInterface *inter) : impInterface(inter){}
};


#endif //DESIGN_PATERNS_BRIDGE_H
