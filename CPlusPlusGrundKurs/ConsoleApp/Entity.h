#pragma once
#include <iostream>
class Entity
{
public:

	static int count;

	Entity()
	{
		std::cout << "Entity Created!" << std::endl;
	}

public:
	void Print();

	~Entity()
	{
		std::cout << "Entity Destroyed!" << std::endl;
	};


};

