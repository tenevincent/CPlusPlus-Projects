// Chapter_1_Exam_Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

int main()
{

	{
		std::vector<char> letters{ 'o', 'm', 'g', 'w', 't', 'f' };
		if (!letters.empty()) {
			std::cout << "The first character is: " << letters.front() << '\n';
			std::cout << "The last character is: " << letters.back() << '\n';

		}
	}



	{
		std::vector<int> ints{ 1, 2, 4, 8, 16 };
		std::vector<std::string> fruits{ "orange", "apple", "raspberry" };
		std::vector<char> empty;

		// Sums all integers in the vector ints (if any), printing only the result.
		int sum = 0;
		for (auto it = ints.cbegin(); it != ints.cend(); it++) {
			sum += *it;

		}

		std::cout << "Sum of ints: " << sum << "\n";

		// Prints the first fruit in the vector fruits, without checking if there is one.
		std::cout << "First fruit: " << *fruits.begin() << "\n";

		if (empty.begin() == empty.end())
			std::cout << "vector 'empty' is indeed empty.\n";
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
