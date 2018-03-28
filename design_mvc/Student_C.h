#ifndef _STUDENT_C_H_
#define _STUDENT_C_H_

/*
	C, control�� ������
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
	Student_V * m_student_v; //��ͼ
	Student_M * m_student_m; //ģ��
};

#endif // !_STUDENT_C_H_

