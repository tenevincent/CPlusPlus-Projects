// Chapter6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <memory>
#include <iostream>
using namespace std;

#include <string>
using namespace std;

 
// #include "widget.h"
// #include "gadget.h"
class Gadget {};


struct Impl {
 
    std::string name;
    std::vector<double> data;
    Gadget g1, g2, g3;

    void  Print() {
        std::cout << "The is a struct calling method..." << std::endl;
    }
};

    class Widget {
    public:
        Widget();
        ~Widget() // ~Widget definition
        {
            std::cout << "The destructor is called..." << std::endl;
        }
        void Print();

        std::shared_ptr<Impl> getImpl() const {
            return  this->pImpl;
        }


    private:       
        std::shared_ptr<Impl> pImpl;
    };
     

    void Widget::Print() {
        std::cout << "The method print is called..." << std::endl;
    }
     Widget::Widget(): pImpl(std::make_unique<Impl>()) {}
    // Widget::~Widget() {}
 
int main() {


    {
        Widget w; // error!
        w.Print();
        w.getImpl()->Print();
    }


    return 0;
}


















































//class A;
//
//
//class C {
//public:
//	void ExecuteDescription(A& a);
//};
//
//
//class A {
//	friend class B;
//	friend void C::ExecuteDescription(A&);
//	friend void DoIt(A&);
//private:
//	int field;
//protected:
//	void print(void) { cout << "It's a secret, that field = " << field << endl; }
//};
//
//void C::ExecuteDescription(A& a) { 
//	a.field--; 
//}
//
//
//class B {
//public:
//	void DoIt(A& a) { a.print(); }
//};
//
//
//void DoIt(A& a) {
//	a.field = 99;
//}
//int main(void) {
//	A a; B b; C c;
//
//	
//	DoIt(a);
//	b.DoIt(a);
//	return 0;
//}

//class Class {
//	int* data;
//public:
//	Class(int value) {
//		data = new int;
//		*data = value;
//	}
//	Class(Class& source) {
//		data = new int;
//		*data = source.value();
//	}
//
//	Class& operator=(Class other)
//	{
//		data = new int;
//		*data = other.value();
//		return *this;
//	}
//
//
//	void increment(void) { (*data)++; }
//	int value(void) { return *data; }
//};
//
//class WithConstructor {
//public:
//	int i;
//	float f;
//	WithConstructor(int a = 0, float b = 0) : i(a), f(b) { }
//
//	 
//	void Display(void) { cout << "i=" << i << ",f=" << f << endl; }
//};
//
//int fun( int& n) {
//	return n++;
//}
//
//
//
//int main(void) {
//
//
//	int ii = 11;
//	cout << fun(ii);
//
//	WithConstructor  o1;
//	WithConstructor* o2;
//	o2 = new WithConstructor;
//	o1.Display();
//	o2->Display();
//
//
//	{
//		Class o2(0), o1(123);
//		o2 = o1;
//		Class o3(o2);
//		o1.increment();
//		cout << o1.value() << endl;
//		cout << o2.value() << endl;
//		cout << o3.value() << endl;
//	}
//
//	return 0;
//}


//class Pet {
//protected:
//	string Name;
//public:
//	Pet(string n) { Name = n; }
//	void Run(void) { cout << Name << ": I'm running" << endl; }
//  virtual void MakeSound(void)  =0;
//};
//class Dog : public Pet {
//public:
//	Dog(string n) : Pet(n) {};
//	void MakeSound(void) override { 
//		cout << Name << ": Woof! Woof!" << endl; 
//	}
//};
//class Cat : public Pet {
//public:
//	Cat(string n) : Pet(n) {};
//	void MakeSound(void) override { 
//		cout << Name << ": Meow! Meow!" << endl; 
//	}
//};
//int main(void) {
//	Pet* a_pet1 = new Cat("Tom");
//	Pet* a_pet2 = new Dog("Spike");
//	
//	// a_pet1->Run();
//
//	a_pet1->MakeSound();
//	a_pet2->MakeSound();
//
//
//	//static_cast<Cat*>(a_pet1)->MakeSound();
//	//a_pet2->Run();
//	//static_cast<Dog*>(a_pet2)->MakeSound();
//	return 0;
//}