#ifndef _GREEN_H_
#define _GREEN_H_

//#pragma once
#include "Color.h"
class Green :
	public Color
{
public:
	Green();
	~Green();

	//override
	virtual void fill();
};

#endif // !_GREEN_H_

