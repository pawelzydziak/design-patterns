#ifndef DESIGN_PATERNS_CONCRETECREATORB_H
#define DESIGN_PATERNS_CONCRETECREATORB_H

#include "Creator.h"
#include "Product.h"
#include "concreteProductB.h"

class concreteCreatorB : public Creator
{
	Product *createProduct() override
	{
		return new concreteProductB();
	}
};


#endif //DESIGN_PATERNS_CONCRETECREATORB_H
