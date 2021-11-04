#ifndef DESIGN_PATERNS_PRODUCT_H
#define DESIGN_PATERNS_PRODUCT_H

#include <string>

class Product
{
public:
	virtual ~Product() = default;

	virtual std::string productFunction() = 0;
};


#endif //DESIGN_PATERNS_PRODUCT_H
