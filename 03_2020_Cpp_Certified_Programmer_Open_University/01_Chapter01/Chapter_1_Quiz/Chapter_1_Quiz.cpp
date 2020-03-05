// Chapter_1_Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <deque>

template <class T>
void print(std::vector<T> v) {

	std::cout << v.capacity() << " " << v.size() << std::endl;
	for (auto elem : v)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}

template <class T>
void print(std::deque<T> v) {

	std::cout  << " " << v.size() << std::endl;
	for (auto elem : v)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}



class A {
public:

	int a;
public:
	A() : a(0) { }

	A(int a) { this->a = a; }

};

int main()
{
	{
	    std::vector<int> v1(10, 3);
	    v1.push_back(3);
	    std::cout << v1.capacity() << " " << v1.size() << std::endl;
	    print(v1);
	std::cout << "--------------------------------" << std::endl;
	std::cout << "--------------------------------" << std::endl;

	
	}


	{
		//std::vector<int> v1;
		//for (int i = 0; i < 10; i++)
		//{
		//    v1.push_back(i);
		//}
		//print(v1);
		//std::vector<int> v2(v1.begin() + 2, v1.end()- 2);
		//print(v2);
	}


	{
		//std::vector<int> v1;
		//for (int i = 0; i < 10; i++)
		//{
		//    v1.push_back(i);
		//}
		//std::cout << "vector v1 before resize" << std::endl;
		//print(v1);
		//
		//v1.resize(4);
		//std::cout << "vector v1 after resize" << std::endl;

		//print(v1);

		//std::vector<int> v2(v1.begin() + 1, v1.end() - 1);
		//std::cout << "vector v2...." << std::endl;
		//print(v2);
	}


	//{
	//	std::vector<A*> v1(5, new A());
	//	v1.push_back(new A(1));
	//	for (auto* elem : v1)
	//	{
	//		std::cout << elem->a << " ";
	//	}
	//}


	//{
	//	std::vector<int> v1;
	//	for (int i = 0; i < 10; i++)
	//	{
	//		v1.push_back(i);
	//	}
	//	v1.erase(v1.begin(), v1.end() - 3);
	//	print(v1);
	//}

	{
		//int t[] = {1,2,3,4,5};
		//std::vector<int> v1(t, t+5);
		//std::vector<int> v2(v1);
		//v1.resize(10);
		//v2.reserve(10);

		//std::cout << "v1----------------" << " ";
		//print(v1);
		//std::cout << "v2----------------" << " ";
		//print(v2);
 	}

	{
		//std::vector<int> v1;
		//std::deque<int> d1;

		//v1.push_back(1);
		//d1.push_back(3);

		//std::cout << v1.empty() << std::endl;
		//std::cout << d1.empty() << std::endl;

		//std::cout << "v1----------------" << " " << std::endl;
		//print(v1);
		//std::cout << "d1----------------" << " " << std::endl;
		//print(d1);
	}

	{
		//std::vector<int> v1;
		//std::deque<int> d1;

		//v1.push_back(1);
		//d1.push_back(3);

		//v1.clear();
		//d1.clear();

		//std::cout << "v1----------------" << " ";
		//print(v1);
		//std::cout << "d1----------------" << " ";
		//print(d1);
	}

	{
		int t[] = { 1,2,3};
		std::deque<int> d1(t,t+2);
		std::cout << "vor: ----------------" << " ";
		print(d1);

		std::deque<int>::iterator it = d1.begin();
		d1.erase(it+1);
		std::cout << "d1----------------" << " ";
		print(d1);
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
