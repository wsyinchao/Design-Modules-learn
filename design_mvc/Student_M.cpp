#include "Student_M.h"
#include <string>
using namespace std;


Student_M::Student_M():
	m_id(0),
	m_name("")
{
}


Student_M::~Student_M()
{
}

void Student_M::setName(const std::string& name)
{
	this->m_name = const_cast<string&>(name);
}

string Student_M::getName()
{
	return m_name;
}

void Student_M::setId(int id)
{
	this->m_id = id;
}

int Student_M::getId()
{
	return m_id;
}
