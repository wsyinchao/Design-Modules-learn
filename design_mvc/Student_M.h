#ifndef _STUTDENT_M_H_
#define _STUTDENT_M_H_

/*
	M, ģ�ͣ��洢����
*/

#include <string>

//#pragma once
class Student_M
{
public:
	Student_M();
	~Student_M();

	//
	void setName(const std::string& name);

	std::string getName();

	//
	void setId(int id);

	int getId();

private:
	std::string m_name;//����
	int m_id;//ѧ��
};

#endif // !_STUTDENT_M_H_

