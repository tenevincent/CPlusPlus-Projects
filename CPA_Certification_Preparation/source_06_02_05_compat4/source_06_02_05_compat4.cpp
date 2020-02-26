// source_06_02_05_compat4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	void Run(void) { cout << Name << ": I'm running" << endl; }
};
class Dog : public Pet {
public:
	Dog(string n) : Pet(n) {};
	void MakeSound(void) { cout << Name << ": Woof! Woof!" << endl; }
};
class Cat : public Pet {
public:
	Cat(string n) : Pet(n) {};
	void MakeSound(void) { cout << Name << ": Meow! Meow!" << endl; }
};


class Vincent : public Pet{
 

public:
	void MakeSound(void) { cout << Name << ": Vincent Pet..." << endl; }

};


int main(void) {
	Pet* a_pet1 = new Cat("Tom");
	Pet* a_pet2 = new Dog("Spike");
	a_pet1->Run();
	static_cast<Cat*>(a_pet1)->MakeSound();
	a_pet2->Run();
	static_cast<Dog*>(a_pet2)->MakeSound();


	static_cast<Vincent*>(a_pet2)->MakeSound();


	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
