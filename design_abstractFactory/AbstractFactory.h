#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

#include "Color.h"
#include "Shape.h"

enum ColorType
{
	red = 1,		//red
	green = 2,		//green
};

//enum
enum ShapType
{
	circle = 1,			//circle
	square = 2,			//square
};

//class
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual Color* getColor(ColorType colorType) = 0;
	virtual Shape* getShape(ShapType shapeType) = 0;
};

#endif // !_ABSTRACTFACTORY_H_

