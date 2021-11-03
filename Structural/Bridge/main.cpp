#include <iostream>
#include "Abstraction.h"
#include "ImpInterface.h"
#include "rudeImplementation.h"
#include "niceImplementation.h"
#include "UseCases.h"
int main()
{
	Abstraction *abstraction;
	ImpInterface *rude = new rudeImplementation;
	ImpInterface *nice = new niceImplementation;

	abstraction = new UseCase1(rude);
	abstraction->abstractFunctionality();
	abstraction = new UseCase1(nice);
	abstraction->abstractFunctionality();
	return 0;
}
