#include "Factory_Shape.h"
#include "Circle.h"
#include "Square.h"



Factory_Shape::Factory_Shape()
{
}


Factory_Shape::~Factory_Shape()
{
}

//�ؼ����������ؾ��幹��ϸ��
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