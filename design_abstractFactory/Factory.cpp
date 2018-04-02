#include "Factory.h"
#include "Factory_Color.h"
#include "Factory_Shape.h"



Factory::Factory()
{
}


Factory::~Factory()
{
}

AbstractFactory* Factory::getFactory(FactoryType factorytype)
{
	AbstractFactory * factory = nullptr;
	switch (factorytype)
	{
	case colorFactory:
		factory = new Factory_Color();
		break;
	case shapeFactory:
		factory = new Factory_Shape();
		break;
	default:
		break;
	}

	return factory;
}
