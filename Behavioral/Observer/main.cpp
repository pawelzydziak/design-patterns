#include <iostream>
#include "concretePublisher.h"
#include "conctreteObserver.h"

int main()
{
	auto *pub = new concretePublisher;
	auto *ob1 = new concreteObserver;
	auto *ob2 = new concreteObserver;
	auto *ob3 = new concreteObserver;
	auto *ob4 = new concreteObserver;

	pub->registerObserver(ob1);
	pub->registerObserver(ob2);
	pub->registerObserver(ob3);
	pub->registerObserver(ob4);

	pub->work(10);

	std::cout << ob3->currentImportantVal << std::endl;
	std::cout << ob4->currentImportantVal << std::endl;

	pub->removeObserver(ob4);

	pub->work(69);

	std::cout << ob3->currentImportantVal << std::endl;
	std::cout << ob4->currentImportantVal << std::endl;

	return 0;
}
