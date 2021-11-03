#ifndef DESIGN_PATERNS_ADAPTER_H
#define DESIGN_PATERNS_ADAPTER_H

#include "TargetClass.h"
#include "Adaptee.h"
class Adapter : public TargetClass
{
private:
	Adaptee *adaptee;
public:
	explicit Adapter(Adaptee *adaptee1) : adaptee(adaptee1){};

	std::string request(int a) override
	{
		std::stringstream ss;
		ss << std::hex << std::uppercase << a;
		std::cout << "[TRANSLATED] My request have hex int with value of: " << ss.str() << std::endl;
		return ss.str();
	}
};


#endif //DESIGN_PATERNS_ADAPTER_H
