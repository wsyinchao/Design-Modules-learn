#include "shapeDecorator.h"



shapeDecorator::shapeDecorator(Shape* shape):
	m_shape(shape)
{
}


shapeDecorator::~shapeDecorator()
{
}

void shapeDecorator::draw()
{
	m_shape->draw();
}
