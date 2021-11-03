#ifndef DESIGN_PATERNS_PRODUCT_H
#define DESIGN_PATERNS_PRODUCT_H

#include <iostream>
#include <vector>

class Product
{
public:
	std::vector<std::string> elements;

	void listElements()
	{
		for (const auto &element: elements)
		{
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}
};


#endif //DESIGN_PATERNS_PRODUCT_H
