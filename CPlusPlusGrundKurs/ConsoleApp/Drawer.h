#pragma once

#include <memory>
#include "Rectangle.h"
#include "Triangle.h"

class Drawer
{

private:

   std::unique_ptr<Rectangle> rectangle = std::make_unique<Rectangle>();
   std::unique_ptr<Triangle> triangle = std::make_unique<Triangle>();

	//Rectangle *rectangle = new Rectangle();
	//Triangle* triangle = new Triangle();


public:
	Drawer()
	{
		std::cout << "Drawer Created!" << std::endl;
	}


	void Draw();

	~Drawer()
	{
		//delete rectangle;
		//delete triangle;
		std::cout << "Drawer Destroyed!" << std::endl;
	};

};

