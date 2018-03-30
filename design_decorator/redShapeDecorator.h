#ifndef _REDSHAPEDECORATOR_H_
#define _REDSHAPEDECORATOR_H_

/**
 * 实体装饰者
 */

#include "shapeDecorator.h"
#include "shape.h"

//#pragma once
class redShapeDecorator : public shapeDecorator
{
public:
	redShapeDecorator(Shape* shape);
	~redShapeDecorator();

	//override
	virtual void draw();

	//关键代码，需要装饰什么内容
	void addRedBounding();
};

#endif // !_REDSHAPEDECORATOR_H_

