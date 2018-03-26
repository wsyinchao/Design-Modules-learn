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

	//ע��۲���
	subject->attach(observer1);
	subject->attach(observer2);

	//�ı䱻�۲���״̬
	subject->setStatus(1);

	//�ͷ��ڴ�
	//TODO...

	return 0;
}