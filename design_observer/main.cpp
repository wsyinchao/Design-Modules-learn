#include "Subject.h"
#include "Observer1.h"
#include "Observer2.h"

#include <iostream>
using namespace std;

int main()
{
	Subject* subject = new Subject();

	Observer* observer1 = new Observer1();
	Observer* observer2 = new Observer2();

	//注册观察者
	subject->attach(observer1);
	subject->attach(observer2);

	//改变被观察者状态
	subject->setStatus(1);

	//释放内存
	//TODO...

	return 0;
}