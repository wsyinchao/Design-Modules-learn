#ifndef _SHAPE_H_
#define _SHAPE_H_

/*
	װ����ģʽ�ĳ�����... shape

	��װ�εĶ���
*/

#include <iostream>

class Shape
{
public:
	Shape() {};
	~Shape() {};

	//���麯��
	virtual void draw() { std::cout << "I am a shape!" << std::endl; };
};

#endif // !_SHAPE_H_


//#pragma once
