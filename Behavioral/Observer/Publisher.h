#ifndef DESIGN_PATERNS_PUBLISHER_H
#define DESIGN_PATERNS_PUBLISHER_H

#include <vector>
#include "Observer.h"
class Publisher
{
public:
	virtual void registerObserver(Observer *o) = 0;
	virtual void removeObserver(Observer *o) = 0;
	virtual void notifyObserver() = 0;
};


#endif //DESIGN_PATERNS_PUBLISHER_H
