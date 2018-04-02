//#pragma once
#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "AbstractFactory.h"

//enum
enum FactoryType
{
	colorFactory = 1,
	shapeFactory = 2,
};

class Factory
{
public:
	Factory();
	~Factory();

	//
	static AbstractFactory* getFactory(FactoryType factoryType);
};

#endif // !_FACTORY_H_

