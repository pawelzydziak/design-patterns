#ifndef DESIGN_PATERNS_CREATOR_H
#define DESIGN_PATERNS_CREATOR_H

#include "Product.h"

class Creator
{
public:
	virtual ~Creator() = default;

	virtual Product *createProduct() = 0;

	std::string importantOperation()
	{
		auto product = createProduct();
		auto str = product->productFunction();
		delete product;
		return str;
	}
};


#endif //DESIGN_PATERNS_CREATOR_H
