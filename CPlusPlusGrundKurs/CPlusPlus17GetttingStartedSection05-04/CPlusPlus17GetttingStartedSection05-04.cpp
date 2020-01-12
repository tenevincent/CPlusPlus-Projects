// CPlusPlus17GetttingStartedSection05-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;

class C;

class A {
private:
	weak_ptr<C> ptr;
public:
	A() {
		cout << "\nA constructor" << endl;
	}

	~A() {
		cout << "\nA destructor" << endl;
	}

	void setObject(weak_ptr<C> ptr) {
		this->ptr = ptr;
	}
};

class B {
private:
	weak_ptr<C> ptr;
public:
	B() {
		cout << "\nB constructor" << endl;
	}

	~B() {
		cout << "\nB destructor" << endl;
	}

	void setObject(weak_ptr<C> ptr) {
		this->ptr = ptr;
	}
};

class C {
private:
	shared_ptr<A> ptr1;
	shared_ptr<B> ptr2;
public:
	C(shared_ptr<A> ptr1, shared_ptr<B> ptr2) {
		cout << "\nC constructor" << endl;
		this->ptr1 = ptr1;
		this->ptr2 = ptr2;
	}

	~C() {
		cout << "\nC destructor" << endl;
	}
};

int main() {

	shared_ptr<A> a(new A());
	shared_ptr<B> b(new B());
	shared_ptr<C> c(new C(a, b));

	a->setObject(shared_ptr<C>(c));
	b->setObject(shared_ptr<C>(c));

	return 0;
}
