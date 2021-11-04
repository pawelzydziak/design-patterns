#ifndef DESIGN_PATERNS_CONCRETEPROTOTYPE_H
#define DESIGN_PATERNS_CONCRETEPROTOTYPE_H

#include "Prototype.h"

class concretePrototype : Prototype
{
private:
	int importantValue;
public:
	explicit concretePrototype(int i) : importantValue(i)
	{};

	Prototype *clone() override
	{
		auto cP = new concretePrototype(*this);
		return cP;
	}

	[[nodiscard]] int getValue() override
	{
		return importantValue;
	}
};


#endif //DESIGN_PATERNS_CONCRETEPROTOTYPE_H
