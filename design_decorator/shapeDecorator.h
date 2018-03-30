#ifndef _SHAPEDECORATOR_H_
#define _SHAPEDECORATOR_H_

/**
 * ����װ����
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

protected: //�������ж���Ϊprotected�� ʵ��װ��������Ҫ����
	Shape * m_shape; //ָ��װ���ߵ�ָ��
};

#endif // !_SHAPEDECORATOR_H_

