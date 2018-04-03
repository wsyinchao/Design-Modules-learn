#ifndef _SINGLEOBJECT_H_
#define _SINGLEOBJECT_H_

//#pragma once
class SingleObject
{
public:
	//�ṩ��ȡʵ���Ľӿ�
	static SingleObject* getInstance();

	//���Է���
	void draw();

private:
	//˽�л����캯��
	SingleObject();
	SingleObject(const SingleObject&) {};
	SingleObject& operator=(const SingleObject&) {};
	~SingleObject();

private:
	int m_i;
};

#endif // !_SINGLEOBJECT_H_

