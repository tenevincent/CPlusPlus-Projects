#pragma once
#include "Person.h"
class Student :  public Person
{
private:
	int semester;
public:
	Student(const std::string& aname, int asemester)
		: Person::Person{ aname }, semester{ asemester }
	{}
	int getsemester() const { return semester; }


};

