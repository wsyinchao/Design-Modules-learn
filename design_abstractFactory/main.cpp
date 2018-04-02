/**
 * ���󹤳����ģʽ
 * һ�����󹤳��������ж��������ÿ������������ͬ�Ķ���
 */

#include "Factory.h"
#include "AbstractFactory.h"
#include "Shape.h"

#include <iostream>
using namespace std;

int main()
{
	AbstractFactory* shapeFactory = Factory::getFactory(FactoryType::shapeFactory);
	AbstractFactory* colorFactory = Factory::getFactory(FactoryType::colorFactory);

	Shape* circle = shapeFactory->getShape(ShapType::circle);
	Shape* square = shapeFactory->getShape(ShapType::square);

	Color* red = colorFactory->getColor(ColorType::red);
	Color* green = colorFactory->getColor(ColorType::green);

	circle->draw();
	red->fill();

	square->draw();
	green->fill();

	return 0;
}