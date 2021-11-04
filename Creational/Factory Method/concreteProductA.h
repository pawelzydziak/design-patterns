#ifndef DESIGN_PATERNS_CONCRETEPRODUCTA_H
#define DESIGN_PATERNS_CONCRETEPRODUCTA_H

#include "Product.h"

class concreteProductA : public Product
{
	std::string productFunction() override
	{
		return "Hello from Product A :)";
	}
};


#endif //DESIGN_PATERNS_CONCRETEPRODUCTA_H
