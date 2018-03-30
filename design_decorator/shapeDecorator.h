#ifndef _SHAPEDECORATOR_H_
#define _SHAPEDECORATOR_H_

/**
 * 抽象装饰类
 */

#include "shape.h"

//#pragma once
class shapeDecorator
{
public:
	shapeDecorator(Shape* shape);
	~shapeDecorator();

	//
	virtual void draw();

protected: //抽象类中定义为protected， 实体装饰类中需要调用
	Shape * m_shape; //指向被装饰者的指针
};

#endif // !_SHAPEDECORATOR_H_

