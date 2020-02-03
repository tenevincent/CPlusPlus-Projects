// FileSystemDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// filesystem_path_example.cpp  
// compile by using: /EHsc  
#include <string>  
#include <iostream>  
#include <sstream>  
#include <filesystem>  

using namespace std;
namespace fs = std::filesystem;


// example adapted from https://docs.microsoft.com/pl-pl/cpp/standard-library/file-system-navigation
void DisplayPathInfo(const fs::path& pathToShow)
{
	int i = 0;
	cout << "Displaying path info for: " << pathToShow << "\n";
	for (const auto part : pathToShow)
	{
		cout << "path part: " << i++ << " = " << part << "\n";
	}

	cout.write("Ich bin da...",5);
	cout << "exists() = " << fs::exists(pathToShow) << "\n"
		<< "root_name() = " << pathToShow.root_name() << "\n"
		<< "root_path() = " << pathToShow.root_path() << "\n"
		<< "relative_path() = " << pathToShow.relative_path() << "\n"
		<< "parent_path() = " << pathToShow.parent_path() << "\n"
		<< "filename() = " << pathToShow.filename() << "\n"
		<< "stem() = " << pathToShow.stem() << "\n"
		<< "extension() = " << pathToShow.extension() << "\n";

	try
	{
		cout << "canonical() = " << fs::canonical(pathToShow) << "\n";
	}
	catch (fs::filesystem_error err)
	{
		cout << "exception: " << err.what() << "\n";
	}
}


int main()
{

	int argc  = 0;

	const fs::path pathToShow{fs::current_path() };

	DisplayPathInfo(pathToShow);

	cout << "path concat/append:\n";
	fs::path p1("C:\\temp");
	p1 /= "user";
	p1 /= "data";
	cout << p1 << "\n";

	fs::path p2("C:\\temp\\");
	p2 += "user";
	p2 += "data";
	cout << p2 << "\n";



    std::cout << "Hello World!\n";
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
