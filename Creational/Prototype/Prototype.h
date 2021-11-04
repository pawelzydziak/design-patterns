#ifndef DESIGN_PATERNS_PROTOTYPE_H
#define DESIGN_PATERNS_PROTOTYPE_H


class Prototype
{
public:
	virtual Prototype *clone() = 0;
	virtual int getValue() = 0;
};


#endif //DESIGN_PATERNS_PROTOTYPE_H
