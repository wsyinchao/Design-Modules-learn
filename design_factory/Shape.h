#ifndef _SHAPE_H_
#define _SHAPE_H_

//#pragma once
class Shape
{
public:
	Shape();
	virtual ~Shape();//ĞéÄâ»¯Îö¹¹º¯Êı

	//pure virtual function
	virtual void draw() = 0;
};

#endif // !_SHAPE_H_

