
#ifndef DESIGN_PATERNS_FACADE_H
#define DESIGN_PATERNS_FACADE_H

#include <string>
#include "ComplicatedSystem1.h"
#include "ComplicatedSystem2.h"
#include <sstream>

class Facade
{
	ComplicatedSystem1 *complicatedSystem1{};
	ComplicatedSystem2 *complicatedSystem2{};

public:
	explicit Facade(ComplicatedSystem1 *cS1, ComplicatedSystem2 *cS2) : complicatedSystem1(cS1), complicatedSystem2(cS2)
	{};

	std::string FacadeOperation()
	{
		std::stringstream ss;
		ss << complicatedSystem2->Operation1();
		ss << complicatedSystem2->Operation2();
		ss << complicatedSystem1->Operation1();
		ss << complicatedSystem1->Operation2();
		return ss.str();
	}
};


#endif //DESIGN_PATERNS_FACADE_H
