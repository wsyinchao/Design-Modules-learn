#include <iostream>
#include <string>

#include "Student_C.h"

using namespace std;

int main()
{
	Student_C student;//����һ��ѧ������ͨ����������������

	string name("yinchao");

	student.setId(1);
	student.setName(name);

	student.updateView();

	return 0;
}
