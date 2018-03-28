#include "Student_C.h"

#include <string>
using namespace std;


Student_C::Student_C()
{
	m_student_m = new Student_M();
	m_student_v = new Student_V();
}


Student_C::~Student_C()
{
}

int Student_C::getId()
{
	return m_student_m->getId();
}

string Student_C::getName()
{
	return m_student_m->getName();
}

void Student_C::setId(int id)
{
	m_student_m->setId(id);
}

void Student_C::setName(const std::string& name)
{
	m_student_m->setName(name);
}

void Student_C::updateView()
{
	m_student_v->printId(m_student_m->getId());
	m_student_v->printName(m_student_m->getName());
}