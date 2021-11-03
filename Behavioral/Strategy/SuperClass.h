#ifndef DESIGN_PATTERNS_GLOWNA_H
#define DESIGN_PATTERNS_GLOWNA_H

#include "Algorithm.h"
#include "concreteAlgo.h"

class SuperClass
{
public:
	SuperClass() = default;

	Algorithm *a;

	void setAlgo(Algorithm *cA)
	{
		this->a = cA;
	}

	[[nodiscard]] int doAlgo() const
	{
		return a->doStaff();
	}

};


#endif //DESIGN_PATTERNS_GLOWNA_H
