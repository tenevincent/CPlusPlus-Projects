// Chapter_1_2_02_Copy_Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <memory>
#include "Chapter_1_2_02_Copy_Constructor.h"


using namespace std;



class A
{
	int number;
	int number2;
public:
	A(int _number) :number(_number), number2(0)
	{
		cout << "Normal constructor\n";
	}
	A()
	{
		cout << "Default constructor\n";
	}

	A(const A& source)
	{
		number = source.number;
		number2 = source.number2;
		cout << "Copy constructor\n";
	}

	A& operator=(const A& source)
	{
		number = source.number;
		number2 = source.number2;
		cout << "move assignment operator\n";
		return *this;
	}


	//A(A&& source) = default;

	//A& operator=(A&& source) = default;


	A(A&& source) noexcept
	{
		using std::swap;

		swap(number, source.number);
		swap(number2, source.number2);
		cout << "move constructor " << number << std::endl;
	}


	A& operator=(A&& source) noexcept
	{
		using std::swap;

		swap(number, source.number);
		swap(number2, source.number2);
		return *this;

		cout << "Assignment operator " << number << std::endl;;
		cout << "Assignment operator " << number << std::endl;
		return *this;
	}

	~A()
	{
		cout << "Destructor\n";
	}


};


void OnUsingVectors();


void OnUsingCreatingVectorCopy();


void OnUsingDestructors();


void DestroyingObjectsDynamically();

void DestroyingObjectsDynamically_02();

int main()
{

	//OnUsingVectors();

	cout << " " << std::endl;;
	cout << " " << std::endl;;


	OnUsingCreatingVectorCopy();


	//OnUsingDestructors();

	//DestroyingObjectsDynamically();

	//DestroyingObjectsDynamically_02();



	//v1[0] = 10;        //(3)
	return 0;
}

void OnUsingVectors()
{
	{
		vector <A> v1; //(1)
		v1.push_back(1); //(2)
		v1.push_back(2); //(2)
		v1.push_back(3); //(3)
	}
}


void OnUsingCreatingVectorCopy()
{

	// 1.2.10 Creating a copy of a vector
	{
		vector <A>v1;              //(1)
		v1.push_back(1);        //(1)
		cout << "First ready!\n";
		//copy constructor
		vector <A>v2(v1);        //(2)
		cout << "Second ready!\n";
		//assignment operator - empty target
		vector <A> v3;            //(3)
		v3 = v2;            //(3)
		cout << "Third ready!\n";
		//assignment - not empty target
		vector <A> v4(2);        //(4)
		v4 = v2;            //(4)
	}
}

void OnUsingDestructors()
{
	// 1.2.11 Destructors
	cout << " 1.2.11 Destructors" << std::endl;;
	{
		vector <A> v1;
		v1.push_back(1);
		cout << "First ready!\n";
		v1.push_back(2);
		cout << "Second ready!\n";
		v1.push_back(3);
		cout << "Third ready!\n";
	}
}




void DestroyingObjectsDynamically()
{
	// 1.2.12 Destroying dynamically allocated objects
	{
		cout << " " << std::endl;;
		cout << "1.2.12 Destroying dynamically allocated objects" << std::endl;
		vector<A*> v1;
		v1.push_back(new A(1));
		cout << "First ready!\n";
		v1.push_back(new A(2));
		cout << "Second ready!\n";
		v1.push_back(new A(3));
		cout << "Third ready!\n";
	}
}
void DestroyingObjectsDynamically_02()
{
	cout << " " << std::endl;;
	cout << "1.2.12 Destroying dynamically allocated objects" << std::endl;;

	//  1.2.12 Destroying dynamically allocated objects
	{
		vector<std::unique_ptr<A>> v1;
		v1.push_back(std::make_unique<A>(1));
		cout << "First ready!\n";
		v1.push_back(std::make_unique<A>(2));
		cout << "Second ready!\n";
		v1.push_back(std::make_unique<A>(3));
		cout << "Third ready!\n";
	}
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
