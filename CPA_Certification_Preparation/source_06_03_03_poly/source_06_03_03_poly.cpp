// source_06_03_03_poly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <memory>
#include <iostream>
using namespace std;




class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	virtual void MakeSound(void) { cout << Name << " the Pet says: Shh! Shh!" << endl; }
};
class Cat : public Pet {
public:
	Cat(string n) : Pet(n) { }
	void MakeSound(void) { cout << Name << " the Cat says: Meow! Meow!" << endl; }
};
class Dog : public Pet {
public:
	Dog(string n) : Pet(n) { }
	void MakeSound(void) { cout << Name << " the Dog says: Woof! Woof!" << endl; }
};

class ResourceType {
	//...
public:
	void makeSound(){ 
		std::cout << "Make sound..." << std::endl;
	}
};



int main(void) {

	float f =  10.501;
	cout << (int)f;



	std::unique_ptr<ResourceType> resource1{ std::make_unique<ResourceType>() };
	resource1->makeSound();

	 




	Pet* a_pet1, * a_pet2;
	Cat* a_cat;
	Dog* a_dog;

	a_pet1 = a_cat = new Cat("Kitty");
	a_pet2 = a_dog = new Dog("Doggie");
	a_pet1->MakeSound();
	a_cat->MakeSound();
	static_cast<Pet*>(a_cat)->MakeSound();


	a_pet2->MakeSound();
	a_dog->MakeSound();
	static_cast<Pet*>(a_dog)->MakeSound();
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
