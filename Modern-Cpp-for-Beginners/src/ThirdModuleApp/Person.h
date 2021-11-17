#pragma once

#include <iostream>
#include <string>


class Person
{
private:
	std::string name;
public:
	explicit Person(const std::string& aname): name{ aname }
	{
	}
	
	std::string getname() const { return name; }
 
};

