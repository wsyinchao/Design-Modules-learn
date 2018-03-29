#ifndef _SHAPE_H_
#define _SHAPE_H_

/*
	装饰者模式的抽象类... shape
*/

#include <iostream>

class Shape
{
public:
	Shape() {};
	~Shape() {};

	//纯虚函数
	virtual void draw() { std::cout << "I am a shape!" << std::endl; };
};

#endif // !_SHAPE_H_


//#pragma once
