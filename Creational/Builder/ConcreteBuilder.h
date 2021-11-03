#ifndef DESIGN_PATERNS_CONCRETEBUILDER_H
#define DESIGN_PATERNS_CONCRETEBUILDER_H

#include "Builder.h"
#include "Product.h"

class ConcreteBuilder : public Builder
{
private:
	Product *product{};
public:
	~ConcreteBuilder()
	{
		delete product;
	}

	ConcreteBuilder()
	{
		reset();
	}

	void addElement(const std::string &s) override
	{
		this->product->elements.push_back(s);
	}

	void addAnotherElement(int i) override
	{
		this->product->elements.push_back(std::to_string(i));
	}

	void reset()
	{
		product = new Product;
	}

	Product *getResult()
	{
		auto res = this->product;
		reset();
		return res;
	}
};


#endif //DESIGN_PATERNS_CONCRETEBUILDER_H
