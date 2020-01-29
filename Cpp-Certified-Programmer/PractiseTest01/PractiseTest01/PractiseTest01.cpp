// PractiseTest01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;
class complex {
	double re, im;
public:
	complex() : re(1), im(0.4) {}
	complex operator ? (complex& t);
	void Print() { cout << re << " " << im; }
};


complex complex::operator ? (complex& t) {
	complex temp;
	temp.re = this ? > re ? t.re;
	temp.im = this ? > im ? t.im;
	return temp;
}
int main() {
	complex c1, c2, c3;
	c3 = c1 ? c2;
	c3.Print();
}