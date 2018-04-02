//#pragma once
#ifndef _FACTORY_CORLOR_H_
#define _FACTORY_CORLOR_H_

#include "Color.h"
#include "Shape.h"
#include "AbstractFactory.h"


class Factory_Color :
	public AbstractFactory
{
public:
	Factory_Color();
	~Factory_Color();

	//
	virtual Color* getColor(ColorType colorType);

	virtual Shape* getShape(ShapType shapeType)
	{
		return nullptr;
	}
};

#endif // !_FACTORY_CORLOR_H_

