#ifndef DESIGN_PATERNS_CONCTRETEOBSERVER_H
#define DESIGN_PATERNS_CONCTRETEOBSERVER_H

class concreteObserver : public Observer
{
public:
	int currentImportantVal{};

	void update(int data) override
	{
		currentImportantVal = data;
	}
};

#endif //DESIGN_PATERNS_CONCTRETEOBSERVER_H
