#include "SingleObject.h"

#include <iostream>
using namespace std;

int main()
{
	//SingleObject* single = new SingleObject();//�޷�����˽�г�Ա

	for (int i = 0; i < 5; ++i)
	{
		SingleObject::getInstance()->draw();
		cout << SingleObject::getInstance() << endl; //���ָ��ĵ�ַ
	}

	return 0;
}
