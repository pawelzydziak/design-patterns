#ifndef DESIGN_PATERNS_CONCRETECREATORA_H
#define DESIGN_PATERNS_CONCRETECREATORA_H

#include "Creator.h"
#include "Product.h"
#include "concreteProductA.h"

class concreteCreatorA : public Creator
{
	Product *createProduct() override
	{
		return new concreteProductA();
	}
};


#endif //DESIGN_PATERNS_CONCRETECREATORA_H
