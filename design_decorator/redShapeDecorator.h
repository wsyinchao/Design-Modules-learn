#ifndef _REDSHAPEDECORATOR_H_
#define _REDSHAPEDECORATOR_H_

/**
 * ʵ��װ����
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

	//�ؼ����룬��Ҫװ��ʲô����
	void addRedBounding();
};

#endif // !_REDSHAPEDECORATOR_H_

