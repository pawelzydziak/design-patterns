#ifndef DESIGN_PATERNS_TARGETCLASS_H
#define DESIGN_PATERNS_TARGETCLASS_H
#include <sstream>

class TargetClass
{
public:
	virtual std::string request(int a) // return this number as hex
	{
		std::stringstream ss;
		ss << std::hex << std::uppercase << a;
		return ss.str();
	}
};


#endif //DESIGN_PATERNS_TARGETCLASS_H
