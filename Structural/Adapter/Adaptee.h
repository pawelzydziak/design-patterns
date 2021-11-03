#ifndef DESIGN_PATERNS_ADAPTEE_H
#define DESIGN_PATERNS_ADAPTEE_H


class Adaptee
{
public:
	std::string aBitDifferentRequest(int d) // returns as dec
	{
		return std::to_string(d);
	}
};


#endif //DESIGN_PATERNS_ADAPTEE_H
