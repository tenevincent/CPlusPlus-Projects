#pragma once
#include <iostream>

class ChapterSamples
{
public:
	void ShowListing1();

	void ShowReferenzListing2();

	void ShowReferenzListing3();

	void ShowNullPointerListing4();

	void ShowNullPointerListing5();

	void ShowNullPointerListing6();


	void foo(const char* str) { std::cout << "const char*\n"; }

	void foo(int val) { std::cout << "int \n"; }

};

