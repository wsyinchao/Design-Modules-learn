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
	//��̬�ֲ�����������ȫ������ֻ��ʼ��һ��
	static SingleObject* instance = new SingleObject();
	return instance;
}

void SingleObject::draw()
{
	cout << "Hello world" << endl;
	//cout << m_i++ << endl; //��֤�Ƿ���ͬһ������
}
