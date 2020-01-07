#pragma once
#include <iostream>
class Triangle
{

public:
	Triangle()
	{
		std::cout << "Triangle Created!" << std::endl;
	}


	void Draw();

	~Triangle()
	{
		std::cout << "Triangle Destroyed!" << std::endl;
	};
};

