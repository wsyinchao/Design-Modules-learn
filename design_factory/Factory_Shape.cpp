#include "Factory_Shape.h"
#include "Circle.h"
#include "Square.h"



Factory_Shape::Factory_Shape()
{
}


Factory_Shape::~Factory_Shape()
{
}

//关键方法，隐藏具体构建细节
Shape* Factory_Shape::getShape(ShapeType shapeType)
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