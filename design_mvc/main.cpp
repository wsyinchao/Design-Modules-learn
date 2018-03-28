#include <iostream>
#include <string>

#include "Student_C.h"

using namespace std;

int main()
{
	Student_C student;//定义一个学生对象，通过控制器来操纵它

	string name("yinchao");

	student.setId(1);
	student.setName(name);

	student.updateView();

	return 0;
}
