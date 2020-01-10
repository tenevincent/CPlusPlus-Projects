#pragma once
#include <iostream>
using namespace std;



class DisplayListing10
{

public:
	void byValue(int a, int b);


	void byReference(int* a, int* b);

	int addieren(const int& val1, const int& val2);

	void byReference(int& a, int& b);

	int& test_referenz(void);

};

