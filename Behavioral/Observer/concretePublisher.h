#ifndef DESIGN_PATERNS_CONCRETEPUBLISHER_H
#define DESIGN_PATERNS_CONCRETEPUBLISHER_H

#include "Publisher.h"
#include <list>

class concretePublisher : public Publisher
{
public:
	int innerValue{};
	std::list<Observer*> observers{};

	void registerObserver(Observer *o) override
	{
		observers.push_back(o);
	}

	void removeObserver(Observer *o) override
	{
		observers.remove(o);
	}

	void notifyObserver() override
	{
		for (const auto &ob : observers)
		{
			ob->update(innerValue);
		}
	}

	void work(int newVal)
	{
		this->innerValue = newVal;
		notifyObserver();
	}

};


#endif //DESIGN_PATERNS_CONCRETEPUBLISHER_H
