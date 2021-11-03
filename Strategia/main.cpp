#include <iostream>
#include "Sub.h"
#include "concreteAlgo2.h"

int main()
{
	Glowna s{};
	s.setAlgo(new concreteAlgo);
	int a = s.doAlgo();
	std::cout<< a << std::endl;

	s.setAlgo(new concreteAlgo2);
	int b = s.doAlgo();
	std::cout<< b << std::endl;

	Sub g{};
	g.setAlgo(new concreteAlgo);
	g.g = g.doAlgo();

	std::cout << g.g;

	return 0;
}
