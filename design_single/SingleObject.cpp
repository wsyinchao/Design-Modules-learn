#include "SingleObject.h"
#include <iostream>
using namespace std;



SingleObject::SingleObject():
	m_i(0)
{
}


SingleObject::~SingleObject()
{
}

SingleObject* SingleObject::getInstance()
{
	//静态局部变量保存在全局区，只初始化一次
	static SingleObject* instance = new SingleObject();
	return instance;
}

void SingleObject::draw()
{
	cout << "Hello world" << endl;
	//cout << m_i++ << endl; //验证是否是同一个对象
}
