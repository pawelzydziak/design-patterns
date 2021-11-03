#ifndef DESIGN_PATTERNS_CONCRETEALGO2_H
#define DESIGN_PATTERNS_CONCRETEALGO2_H

#include "Algorithm.h"

class concreteAlgo2 : public Algorithm
{
public:
	int doStaff() override
	{
		return 11;
	}
};


#endif //DESIGN_PATTERNS_CONCRETEALGO2_H
