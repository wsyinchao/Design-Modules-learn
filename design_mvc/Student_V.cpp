#include "Student_V.h"
#include <string>
#include <iostream>
using namespace std;


Student_V::Student_V()
{
}


Student_V::~Student_V()
{
}

void Student_V::printName(const std::string& name)
{
	cout << name << endl;
}

void Student_V::printId(int id)
{
	cout << id << endl;
}
