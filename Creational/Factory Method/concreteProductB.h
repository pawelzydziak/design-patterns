#ifndef DESIGN_PATERNS_CONCRETEPRODUCTB_H
#define DESIGN_PATERNS_CONCRETEPRODUCTB_H

#include "Product.h"

class concreteProductB : public Product
{
	std::string productFunction() override
	{
		return "Hello from Product B :)";
	}
};


#endif //DESIGN_PATERNS_CONCRETEPRODUCTB_H
