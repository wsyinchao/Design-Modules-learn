#ifndef _STUDENT_C_H_
#define _STUDENT_C_H_

/*
	C, control， 控制器
*/

#include <string>

#include "Student_V.h"
#include "Student_M.h"

//#pragma once
class Student_C
{
public:
	Student_C();
	~Student_C();

	//
	int getId();

	void setId(int id);

	std::string getName();

	void setName(const std::string& name);

	//
	void updateView();

private:
	Student_V * m_student_v; //视图
	Student_M * m_student_m; //模型
};

#endif // !_STUDENT_C_H_

