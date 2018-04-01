#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "Shape.h"

//enum
enum ShapeType
{
	circle = 1,		//circle
	square = 2,		//square
};

//#pragma once
class Factory_Shape
{
public:
	Factory_Shape();
	~Factory_Shape();

	//interface
	static Shape* getShape(ShapeType shapeType);
};

#endif // !_FACTORY_H_

