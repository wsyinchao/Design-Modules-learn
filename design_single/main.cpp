#include "SingleObject.h"

#include <iostream>
using namespace std;

int main()
{
	//SingleObject* single = new SingleObject();//无法访问私有成员

	for (int i = 0; i < 5; ++i)
	{
		SingleObject::getInstance()->draw();
		cout << SingleObject::getInstance() << endl; //输出指针的地址
	}

	return 0;
}
