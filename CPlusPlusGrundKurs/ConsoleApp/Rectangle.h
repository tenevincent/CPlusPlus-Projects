#pragma once
#include <iostream>

class Rectangle
{
public:
	Rectangle()
	{
		std::cout << "Rectangle Created!" << std::endl;
	}


	void Draw();

	~Rectangle()
	{
		std::cout << "Rectangle Destroyed!" << std::endl;
	};
};

