#ifndef _CIRCLE_H_
#define _CIRCLE_H_

//#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle();
	~Circle();

	//override
	virtual void draw();
};

#endif // !_CIRCLE_H_

