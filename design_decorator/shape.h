#ifndef _SHAPE_H_
#define _SHAPE_H_

/*
	装饰者模式的抽象类... shape

	被装饰的对象
*/

#include <iostream>

class Shape
{
public:
	Shape() {};
	~Shape() {};

	//纯虚函数
	virtual void draw() = 0;
};

#endif // !_SHAPE_H_


//#pragma once
