#ifndef _SQUARE_H_
#define _SQUARE_H_

//#pragma once
#include "Shape.h"
class Square :
	public Shape
{
public:
	Square();
	~Square();

	//override
	virtual void draw();
};

#endif // !_SQUARE_H_

