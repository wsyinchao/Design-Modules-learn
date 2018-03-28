#ifndef _STUDENT_V_H_
#define _STUDENT_V_H_

/*
	V, 视图, 显示数据
*/

#include <string>

//#pragma once
class Student_V
{
public:
	Student_V();
	~Student_V();

	//print name 
	void printName(const std::string& name);

	void printId(int id);
};

#endif // !_STUDENT_V_H_

