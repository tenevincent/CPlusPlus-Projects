#include "Drawer.h"

void Drawer::Draw() {

	this->rectangle->Draw();
	this->triangle->Draw();

	std::cout << "Drawer..." << std::endl;
}

