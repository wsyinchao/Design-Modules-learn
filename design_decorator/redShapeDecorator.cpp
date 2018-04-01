#include "redShapeDecorator.h"
#include <iostream>
using namespace std;



redShapeDecorator::redShapeDecorator(Shape* shape):
	shapeDecorator(shape) //调用父类的有参构造函数
{
}

redShapeDecorator::~redShapeDecorator()
{
}

void redShapeDecorator::draw()
{
	m_shape->draw();
	addRedBounding();//装饰
}

void redShapeDecorator::addRedBounding()
{
	cout << "I have a red bound" << endl;
}
