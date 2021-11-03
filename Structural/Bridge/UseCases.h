#ifndef DESIGN_PATERNS_USECASES_H
#define DESIGN_PATERNS_USECASES_H


class UseCase1 : public Bridge
{
public:
	explicit UseCase1(ImpInterface* in): Bridge(in){}

	void abstractFunctionality() override
	{
		impInterface->abstractFunctionality();
//		impInterface->implementationInterfaceFunctionality();
	}
};

#endif //DESIGN_PATERNS_USECASES_H
