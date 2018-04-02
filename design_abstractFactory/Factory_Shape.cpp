#include "Factory_Shape.h"
#include "Circle.h"
#include "Square.h"



Factory_Shape::Factory_Shape()
{
}


Factory_Shape::~Factory_Shape()
{
}

//return shape
Shape* Factory_Shape::getShape(ShapType shapeType)
{
	Shape* shape = nullptr;
	switch (shapeType)
	{
	case circle:
		shape = new Circle();
		break;
	case square:
		shape = new Square();
		break;
	default:
		break;
	}

	return shape;
}
