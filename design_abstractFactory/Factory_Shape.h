#ifndef _FACTORY_SHAPE_H_
#define _FACTORY_SHAPE_H_

#include "Shape.h"
#include "AbstractFactory.h"


//#pragma once
class Factory_Shape :
	public AbstractFactory
{
public:
	Factory_Shape();
	~Factory_Shape();

	virtual Shape* getShape(ShapType shapeType);

	virtual Color* getColor(ColorType colorType)
	{
		return nullptr;
	}
};

#endif // !_FACTORY_SHAPE_H_

