#ifndef _STUTDENT_M_H_
#define _STUTDENT_M_H_

/*
	M, 模型，存储数据
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
	std::string m_name;//名字
	int m_id;//学号
};

#endif // !_STUTDENT_M_H_

