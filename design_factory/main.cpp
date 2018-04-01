/**
 * 工厂模式,是的获取不同子类对象统一格式
 */
#include "Factory_Shape.h"
#include "Shape.h"

#include <iostream>
using namespace std;

int main()
{
	Shape* circle = Factory_Shape::getShape(ShapeType::circle);
	Shape* square = Factory_Shape::getShape(ShapeType::square);

	if (circle != nullptr)
	{
		circle->draw();
	}

	if (square != nullptr)
	{
		square->draw();
	}

	return 0;
}
