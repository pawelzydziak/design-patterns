//
// Created by darlo on 03/11/2021.
//

#ifndef KATA_DRAFTS_GLOWNA_H
#define KATA_DRAFTS_GLOWNA_H
#include "Algo.h"
#include "concreteAlgo.h"
class Glowna
{
public:
	Glowna() = default;
	Algo *a;

	void setAlgo(Algo *cA)
	{
		this->a =cA;
	}

	int doAlgo()
	{
		return a->doStaf();
	}

};


#endif //KATA_DRAFTS_GLOWNA_H
