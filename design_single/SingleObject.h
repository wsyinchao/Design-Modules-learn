#ifndef _SINGLEOBJECT_H_
#define _SINGLEOBJECT_H_

//#pragma once
class SingleObject
{
public:
	//提供获取实例的接口
	static SingleObject* getInstance();

	//测试方法
	void draw();

private:
	//私有化构造函数
	SingleObject();
	SingleObject(const SingleObject&) {};
	SingleObject& operator=(const SingleObject&) {};
	~SingleObject();

private:
	int m_i;
};

#endif // !_SINGLEOBJECT_H_

