#include "redShapeDecorator.h"
#include <iostream>
using namespace std;



redShapeDecorator::redShapeDecorator(Shape* shape):
	shapeDecorator(shape) //���ø�����вι��캯��
{
}

redShapeDecorator::~redShapeDecorator()
{
}

void redShapeDecorator::draw()
{
	m_shape->draw();
	addRedBounding();//װ��
}

void redShapeDecorator::addRedBounding()
{
	cout << "I have a red bound" << endl;
}
