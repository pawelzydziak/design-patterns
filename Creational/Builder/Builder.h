#ifndef DESIGN_PATERNS_BUILDER_H
#define DESIGN_PATERNS_BUILDER_H

class Builder
{
public:
	virtual void addElement(const std::string &s) = 0;

	virtual void addAnotherElement(int i) = 0;
};


#endif //DESIGN_PATERNS_BUILDER_H
